#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "soundctrl.h"
#include "pico/cyw43_arch.h"

int main() {

    stdio_init_all();
    init_hw();

    if (cyw43_arch_init()) {
        printf("Wi-Fi init failed");
        return -1;
    }

    gpio_put(PIN_MUXA, 1);
    gpio_put(PIN_MUXB, 1);
    gpio_put(PIN_MUXC, 1);
    

    while (1) {
        sleep_ms(250);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        gpio_put(PIN_LED1G, 1);
        gpio_put(PIN_LED2G, 1);
        gpio_put(PIN_LED3G, 1);
        gpio_put(PIN_LED4G, 1);
        gpio_put(PIN_LED5G, 1);
        gpio_put(PIN_LED1R, 0);
        gpio_put(PIN_LED2R, 0);
        gpio_put(PIN_LED3R, 0);
        gpio_put(PIN_LED4R, 0);
        gpio_put(PIN_LED5R, 0);
        
        if (gpio_get(PIN_SW1)) {
            gpio_put(PIN_LED1R, 1);
            gpio_put(PIN_LED1G, 1);
        }
        if (gpio_get(PIN_SW2)) {
            gpio_put(PIN_LED2R, 1);
            gpio_put(PIN_LED2G, 1);
        }
        if (gpio_get(PIN_SW3)) {
            gpio_put(PIN_LED3R, 1);
            gpio_put(PIN_LED3G, 1);
        }
        if (gpio_get(PIN_SW4)) {
            gpio_put(PIN_LED4R, 1);
            gpio_put(PIN_LED4G, 1);
        }
        if (gpio_get(PIN_SW5)) {
            gpio_put(PIN_LED5R, 1);
            gpio_put(PIN_LED5G, 1);
        }

        sleep_ms(250);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        gpio_put(PIN_LED1G, 0);
        gpio_put(PIN_LED2G, 0);
        gpio_put(PIN_LED3G, 0);
        gpio_put(PIN_LED4G, 0);
        gpio_put(PIN_LED5G, 0);
        gpio_put(PIN_LED1R, 1);
        gpio_put(PIN_LED2R, 1);
        gpio_put(PIN_LED3R, 1);
        gpio_put(PIN_LED4R, 1);
        gpio_put(PIN_LED5R, 1);

        if (gpio_get(PIN_SW1)) {
            gpio_put(PIN_LED1R, 1);
            gpio_put(PIN_LED1G, 1);
        }
        if (gpio_get(PIN_SW2)) {
            gpio_put(PIN_LED2R, 1);
            gpio_put(PIN_LED2G, 1);
        }
        if (gpio_get(PIN_SW3)) {
            gpio_put(PIN_LED3R, 1);
            gpio_put(PIN_LED3G, 1);
        }
        if (gpio_get(PIN_SW4)) {
            gpio_put(PIN_LED4R, 1);
            gpio_put(PIN_LED4G, 1);
        }
        if (gpio_get(PIN_SW5)) {
            gpio_put(PIN_LED5R, 1);
            gpio_put(PIN_LED5G, 1);
        }

    }

    return 0;
}