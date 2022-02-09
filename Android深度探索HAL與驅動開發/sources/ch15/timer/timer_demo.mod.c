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
	{ 0x37a0cba, "kfree" },
	{ 0x8728140, "malloc_sizes" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x8eab325a, "misc_deregister" },
	{ 0xdc74cc24, "kmem_cache_alloc" },
	{ 0xdad0914e, "misc_register" },
	{ 0xea147363, "printk" },
	{ 0x69496641, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x61593b72, "__mod_timer" },
	{ 0xc27487dd, "__bug" },
	{ 0x366bdeaa, "init_timer" },
	{ 0x7e531cde, "del_timer" },
	{ 0xbc10dd97, "__put_user_4" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9C0CCF161093FE26C3023E6");
