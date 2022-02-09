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
	{ 0xb4bbdfe4, "misc_deregister" },
	{ 0xea147363, "printk" },
	{ 0x9fa0df8d, "misc_register" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x62376c5c, "clk_get_rate" },
	{ 0xd65f754a, "clk_get" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x448212fa, "down_trylock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8cf51d15, "up" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "917962848EC2E167B145B72");
