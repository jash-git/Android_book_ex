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
	{ 0x885b74e3, "module_layout" },
	{ 0xc8a46f5a, "put_disk" },
	{ 0x78cee6e4, "del_gendisk" },
	{ 0xf8b2554e, "blk_cleanup_queue" },
	{ 0xd62bdeb, "add_disk" },
	{ 0x75193433, "alloc_disk" },
	{ 0xdb4d8252, "blk_init_queue" },
	{ 0x847f4850, "__blk_end_request_all" },
	{ 0xa935f2b2, "__blk_end_request_cur" },
	{ 0x236c8c64, "memcpy" },
	{ 0xb8bc0165, "blk_fetch_request" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F6408C035AFC895EE9341D3");
