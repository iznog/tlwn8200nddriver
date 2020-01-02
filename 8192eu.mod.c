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
	{ 0xac902c3f, "module_layout" },
	{ 0xf44967e6, "register_netdevice" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd4fab16, "complete_and_exit" },
	{ 0x914ad414, "wiphy_free" },
	{ 0x17a142df, "__copy_from_user" },
	{ 0xe7648bbf, "cfg80211_unlink_bss" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xbf33c703, "single_open" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x98082893, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x6cc0821a, "dev_set_drvdata" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x878a4e5f, "single_release" },
	{ 0x972e528f, "find_vpid" },
	{ 0x9aca444b, "get_monotonic_boottime" },
	{ 0xde8acad7, "cfg80211_inform_bss_frame" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x6b1ca381, "netif_carrier_on" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xae62fdba, "skb_clone" },
	{ 0x14b08268, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x39c29399, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x38f42821, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8d676f78, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xbab8b2a6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1f81ff4, "usb_kill_urb" },
	{ 0xc94b50df, "remove_proc_entry" },
	{ 0x2650909b, "cfg80211_rx_mgmt" },
	{ 0x6fa6a8b9, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x1883a8d6, "mutex_unlock" },
	{ 0x4c872189, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x14ed47a6, "usb_enable_autosuspend" },
	{ 0x999e8297, "vfree" },
	{ 0x48f74506, "cfg80211_del_sta" },
	{ 0x725de4a7, "usb_disable_autosuspend" },
	{ 0x91715312, "sprintf" },
	{ 0x378d4551, "seq_read" },
	{ 0xc7a2f4e6, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x71742f4e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x90d064a2, "cfg80211_mgmt_tx_status" },
	{ 0x7f92586c, "netif_rx" },
	{ 0x6629b846, "__pskb_pull_tail" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x567656e0, "vfs_read" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x78388c41, "proc_mkdir" },
	{ 0x99ddb30a, "__ieee80211_get_channel" },
	{ 0xb86e4ab9, "random32" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xace3b41d, "cfg80211_get_bss" },
	{ 0xcc3fd46b, "usb_deregister" },
	{ 0x77ffa018, "mutex_lock_interruptible" },
	{ 0xb04877fb, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xe4a969bf, "free_netdev" },
	{ 0x356dbd0a, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x6bbc4438, "register_netdev" },
	{ 0x7e95a710, "usb_control_msg" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfb344d33, "skb_push" },
	{ 0x48ec96bd, "cfg80211_connect_result" },
	{ 0xc44ec9fd, "cfg80211_michael_mic_failure" },
	{ 0x306a19cc, "wiphy_apply_custom_regulatory" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xebef4f36, "kill_pid" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x97fd791e, "skb_pull" },
	{ 0xc6e28775, "device_init_wakeup" },
	{ 0x181e854b, "usb_free_coherent" },
	{ 0x194f1291, "cfg80211_ibss_joined" },
	{ 0x48dbb45c, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf0914723, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x861671ca, "flush_signals" },
	{ 0xecb7464, "skb_queue_tail" },
	{ 0xfc7b8ec5, "netif_device_attach" },
	{ 0xf0b5f0b4, "usb_submit_urb" },
	{ 0xe95fcd05, "cfg80211_roamed" },
	{ 0x67b9e73f, "cfg80211_put_bss" },
	{ 0x6393adfd, "__alloc_skb" },
	{ 0xf6f769d4, "wiphy_new" },
	{ 0xed0734ae, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf4d04844, "wiphy_register" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0xe1cbea27, "usb_reset_device" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x2de0dff6, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x5d306180, "cfg80211_ready_on_channel" },
	{ 0x10a0f930, "eth_type_trans" },
	{ 0x51577603, "wake_up_process" },
	{ 0xee0e2138, "cfg80211_disconnected" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xe29cd309, "unregister_netdevice_queue" },
	{ 0x7f590830, "cfg80211_new_sta" },
	{ 0xd0efc797, "proc_create_data" },
	{ 0x7ed9ecf3, "seq_lseek" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x164426d0, "dev_alloc_name" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x2eb22412, "up" },
	{ 0x6023f394, "usb_register_driver" },
	{ 0xcdc7f47, "skb_dequeue" },
	{ 0xb4d44ec5, "cfg80211_remain_on_channel_expired" },
	{ 0x4b61f994, "unregister_netdev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f7f2d1b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2aa9868b, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd86e7695, "usb_alloc_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9e805a1a, "cfg80211_scan_done" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x807de797, "skb_put" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xac53b75c, "skb_copy_bits" },
	{ 0xc14bed20, "dev_get_drvdata" },
	{ 0x4098618b, "usb_free_urb" },
	{ 0xb40cdd25, "usb_autopm_put_interface" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x760a0f4f, "yield" },
	{ 0xc8b923a5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x204f8d99, "filp_open" },
	{ 0x7f5f70d1, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v0BDAp818Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v2357p0126d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "5C37FD347C95F21AEA811BD");
