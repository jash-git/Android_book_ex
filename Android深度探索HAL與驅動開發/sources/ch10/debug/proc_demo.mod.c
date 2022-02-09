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
	{ 0xa1e48967, "remove_proc_entry" },
	{ 0xea147363, "printk" },
	{ 0x750756ed, "create_proc_entry" },
	{ 0x5a020781, "proc_mkdir" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F78239D1D6C31F77F7889CC");
