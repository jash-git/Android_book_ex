#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/kernel.h>	/* printk() */
#include <linux/slab.h>		/* kmalloc() */
#include <linux/fs.h>		/* everything... */
#include <linux/errno.h>	/* error codes */
#include <linux/timer.h>
#include <linux/types.h>	/* size_t */
#include <linux/fcntl.h>	/* O_ACCMODE */
#include <linux/hdreg.h>	/* HDIO_GETGEO */
#include <linux/kdev_t.h>
#include <linux/vmalloc.h>
#include <linux/genhd.h>
#include <linux/blkdev.h>
#include <linux/buffer_head.h>	/* invalidate_bdev */
#include <linux/bio.h>


#define BLOCK_DEVICEMAJOR        COMPAQ_SMART2_MAJOR
#define BLOCK_DISKNAME        "queue_block" 
#define BLOCK_DEV_BYTES        (1*1024*1024)   // 1M

static struct request_queue *block_request_queue;
static struct gendisk *block_dev_disk;
unsigned char block_dev_data[BLOCK_DEV_BYTES];

static void block_dev_do_request(struct request_queue *q)
{
        struct request *req =blk_fetch_request(q);

       while ( req  != NULL) {
               sector_t sector = blk_rq_pos(req);
               unsigned long nsector = blk_rq_cur_sectors(req);
                if ((sector + nsector)<<9 
                        > BLOCK_DEV_BYTES) {
                        printk(KERN_ERR BLOCK_DISKNAME
                                ": bad request: block=%llu, count=%llu\n",
                                (unsigned long long)sector,
                                 (unsigned long long)nsector);
                        __blk_end_request_all(req, -EIO);
                        continue;
                }  

                switch (rq_data_dir(req)) {
                case READ:
                        memcpy(req->buffer,
                                block_dev_data + (sector<<9),
                                nsector<<9);
                       
                        break;
                case WRITE:
                        memcpy(block_dev_data + (sector<<9),
                                req->buffer,  nsector<<9);
                       
                        break;
                default:
                      
                        break;
                }
             if ( ! __blk_end_request_cur(req, 0) ) {
			req = blk_fetch_request(q);
		}
        }
}
static int block_dev_open (struct block_device *device, fmode_t mode)
{

    printk("open %s\n", device->bd_disk->disk_name);
    return 0;
}
//  ???????????????
static int block_dev_release(struct gendisk *gendisk, fmode_t mode)
{   
    printk("release %s\n", gendisk->disk_name);
    return 0;
}


struct block_device_operations block_dev_fops = {
        .owner                = THIS_MODULE,.open=block_dev_open, .release=block_dev_release
};

static int __init block_dev_init(void)
{
        int ret;

        block_request_queue = blk_init_queue(block_dev_do_request, NULL);
        if (!block_request_queue) {
                ret = -ENOMEM;
                goto err_init_queue;
        }

        block_dev_disk = alloc_disk(1);
        if (!block_dev_disk) {
                ret = -ENOMEM;
                goto err_alloc_disk;
        }

        strcpy(block_dev_disk->disk_name, BLOCK_DISKNAME);
        block_dev_disk->major = BLOCK_DEVICEMAJOR;
        block_dev_disk->first_minor = 0;
        block_dev_disk->fops = &block_dev_fops;
        block_dev_disk->queue = block_request_queue;
        set_capacity(block_dev_disk, BLOCK_DEV_BYTES>>9);
        add_disk(block_dev_disk);

        return 0;

err_alloc_disk:
        blk_cleanup_queue(block_request_queue);
err_init_queue:
        return ret;
}

static void __exit block_dev_exit(void)
{
        del_gendisk(block_dev_disk);
        put_disk(block_dev_disk);
        blk_cleanup_queue(block_request_queue);
}

module_init(block_dev_init);
module_exit(block_dev_exit);
