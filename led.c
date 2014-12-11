#ifdef CONFIG_OF
#include <linux/of.h>
#include <linux/of_gpio.h>
#endif
 
static int firefly_led_probe(struct platform_device *pdev)
{
        int ret = -1;
            int gpio, flag;
                struct device_node *led_node = pdev->dev.of_node;
                 
                    gpio = of_get_named_gpio_flags(led_node, "led-power", 0, &flag);
                        if (!gpio_is_valid(gpio)){
                                    printk("invalid led-power: %d\n",gpio);
                                            return -1;
                                                } 
                            if (gpio_request(gpio, "led_power")) {
                                        printk("gpio %d request failed!\n",gpio);
                                                return ret;
                                                    }
                                led_info.power_gpio = gpio;
                                    led_info.power_enable_value = (flag == OF_GPIO_ACTIVE_LOW) ? 0 : 1;
                                        gpio_direction_output(led_info.power_gpio, !(led_info.power_enable_value));
                                        ...
                                            on_error:
                                                gpio_free(gpio);
}
