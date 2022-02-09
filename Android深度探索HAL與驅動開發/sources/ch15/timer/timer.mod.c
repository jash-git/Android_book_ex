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
	{ 0x37a0cba, "kfree" },
	{ 0x8b299257, "misc_deregister" },
	{ 0xa963fd01, "kmem_cache_alloc_trace" },
	{ 0xac283e02, "kmalloc_caches" },
	{ 0xe4255c44, "misc_register" },
	{ 0x27e1a049, "printk" },
	{ 0xce095088, "mod_timer" },
	{ 0x71205378, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9e1bdc28, "init_timer_key" },
	{ 0xe1bc7ede, "del_timer_sync" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9090D63BA6B8822E3FB4C91");
