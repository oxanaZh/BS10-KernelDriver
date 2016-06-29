/*
 * lkm.c
 *
 * BS 10 Kernel module
 *  Created on: 24.06.2016
 *      Author: Oxana Zh.,  Karsten T., Mirko K.
 */

#undef __KERNEL__
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init firstmodule_init(void)
{
	printk(KERN_INFO "my first kernel module init\n");
	return 0; // Non-zero return means that the module couldn’t be loaded.
}

static void __exit firstmodule_cleanup(void)
{
	printk(KERN_INFO "Cleaning up module.\n");
}

module_init(firstmodule_init);
module_exit(firstmodule_cleanup);


MODULE_LICENSE("GPL"); /* to avoid tainted flag */
MODULE_AUTHOR("Oxana Zh.,  Karsten T., Mirko K."); /* Who wrote this module? */
MODULE_DESCRIPTION("Beispieltreiber"); /* What does this module do */
