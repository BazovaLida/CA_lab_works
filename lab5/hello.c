#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

#include <linux/types.h>

MODULE_AUTHOR("Bazova Lidiia IV-81");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training");
MODULE_LICENSE("Dual BSD/GPL");

static uint count = 1;
module_param(count,uint,S_IRUGO);
MODULE_PARM_DESC(count, " The amount of times to print 'Hello world!'. Should be between 0 and 10");

static int __init initter(void)
{
  uint i = 0;

  if(count <= 10 && count >=5) {
    printk(KERN_INFO "The count is between 5 and 10");
  } else if(count == 0){
    printk(KERN_INFO "The count is 0");
  } else if(count > 10) {
    printk(KERN_INFO "Error parametr: the count is greter than 10.");
    printk(KERN_EMERG "");
    return -EINVAL;
  }

  for(i = 0; i < count; i++){
    printk(KERN_INFO "Hello, world!\n");
  }
  printk(KERN_EMERG "");
  return 0;
}

static void __exit exitter(void)
{
  /* Cleanup code here */
}

module_init(initter);
module_exit(exitter);