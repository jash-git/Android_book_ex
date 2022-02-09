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
	{ 0xac54fc9f, "mempool_destroy" },
	{ 0x62aba95, "mempool_free" },
	{ 0xab53b0a8, "mempool_alloc" },
	{ 0x1f7cc628, "mempool_create" },
	{ 0x8728140, "malloc_sizes" },
	{ 0xdc74cc24, "kmem_cache_alloc" },
	{ 0xea147363, "printk" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3BA48E05DA72675F94BE038");
