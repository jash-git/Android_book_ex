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
	{ 0x41572473, "module_layout" },
	{ 0xcc662366, "destroy_workqueue" },
	{ 0x13d456e1, "flush_workqueue" },
	{ 0x3970f45b, "queue_work" },
	{ 0xa963fd01, "kmem_cache_alloc_trace" },
	{ 0xac283e02, "kmalloc_caches" },
	{ 0xa74e931b, "__alloc_workqueue_key" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9AAD4D57038F2DA27B1F401");
