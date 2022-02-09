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
	{ 0xa90c928a, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb4bbdfe4, "misc_deregister" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x9fa0df8d, "misc_register" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x94af632e, "complete_all" },
	{ 0x60f71cfa, "complete" },
	{ 0xea147363, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0FAF34F0C9C4CD1147BBA08");
