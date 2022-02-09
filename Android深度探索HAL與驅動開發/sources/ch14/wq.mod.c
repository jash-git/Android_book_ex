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
	{ 0xf66d8bd7, "destroy_workqueue" },
	{ 0x509d1bd1, "flush_workqueue" },
	{ 0x8728140, "malloc_sizes" },
	{ 0xa13d2e39, "queue_work" },
	{ 0xdc74cc24, "kmem_cache_alloc" },
	{ 0x4d900ff8, "__create_workqueue_key" },
	{ 0xea147363, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "847F8A34D5D85787108F852");
