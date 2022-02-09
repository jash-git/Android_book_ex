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
	{ 0x89f8ac31, "kmem_cache_destroy" },
	{ 0x4fcadf75, "kmem_cache_free" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xea147363, "printk" },
	{ 0xa5aa07ac, "kmem_cache_alloc" },
	{ 0x9631db17, "kmem_cache_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "790C60AE96CB6185FB3FC9A");
