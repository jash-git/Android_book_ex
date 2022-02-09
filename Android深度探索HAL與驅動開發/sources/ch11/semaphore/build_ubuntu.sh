# build_ubuntu.sh
source /root/drivers/common.sh
make   -C  $UBUNTU_KERNEL_PATH  M=$PWD
testing=$(lsmod | grep  "semaphore")
if [ "$testing" != "" ]; then
    rmmod semaphore
fi
testing=$(lsmod | grep  "rw_semaphore")
if [ "$testing" != "" ]; then
    rmmod rw_semaphore
fi

insmod $PWD/semaphore.ko
insmod $PWD/rw_semaphore.ko

