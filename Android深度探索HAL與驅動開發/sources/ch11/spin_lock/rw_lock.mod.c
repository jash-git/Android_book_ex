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
	{ 0xf2afa595, "param_get_charp" },
	{ 0x8785725d, "param_set_charp" },
	{ 0x8eab325a, "misc_deregister" },
	{ 0xdad0914e, "misc_register" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea147363, "printk" },
	{ 0x72270e35, "do_gettimeofday" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1823C564E78D480459F7F10");
