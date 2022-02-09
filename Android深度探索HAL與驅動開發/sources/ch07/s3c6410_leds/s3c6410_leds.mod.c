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
	{ 0x80d152bc, "module_layout" },
	{ 0xacc1ebd1, "param_ops_charp" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0xd1329880, "param_array_ops" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x7abe2fea, "class_destroy" },
	{ 0x849ab1a0, "device_destroy" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xea147363, "printk" },
	{ 0x315d9e39, "device_create" },
	{ 0xead9dd13, "__class_create" },
	{ 0x7e3cba64, "cdev_add" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x617db9d1, "cdev_init" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "608ADFE743C28117BC85B27");
