#include <pcap.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init afdx_init(void) {
    printk(KERN_INFO "AFDX Module Loaded.\n");
    return 0;
}

static void __exit afdx_exit(void) {
    printk(KERN_INFO "AFDX Module Unloaded.\n");
}

module_init(afdx_init);
module_exit(afdx_exit);
MODULE_LICENSE("GPL");
