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
	{ 0x8eab325a, "misc_deregister" },
	{ 0xea147363, "printk" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0xdad0914e, "misc_register" },
	{ 0xb6c70a7d, "__wake_up" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x51493d94, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8085c7b1, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F37AFE98FBCD4E4CA9FA99B");
