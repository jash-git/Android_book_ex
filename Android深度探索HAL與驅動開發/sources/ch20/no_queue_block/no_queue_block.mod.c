#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x60547ef, "struct_module" },
	{ 0xf5f01890, "put_disk" },
	{ 0x1efe83ea, "del_gendisk" },
	{ 0x7039f00b, "blk_cleanup_queue" },
	{ 0xbafef0e2, "add_disk" },
	{ 0xe914e41e, "strcpy" },
	{ 0x49289c9b, "alloc_disk" },
	{ 0x214e39, "blk_queue_make_request" },
	{ 0x6db2a5eb, "blk_alloc_queue" },
	{ 0xf9997e4e, "mem_map" },
	{ 0xd1e91c9b, "bio_endio" },
	{ 0x9d669763, "memcpy" },
	{ 0xea147363, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "35034D3975534FA9D907E68");
