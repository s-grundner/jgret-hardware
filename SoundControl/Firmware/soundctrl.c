#include "soundctrl.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

void init_pin_out_low(int pin) {
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_OUT);
    gpio_put(pin, 0);
}

void init_pin_in(int pin) {
    gpio_init(pin);
    gpio_set_dir(pin, GPIO_IN);
}

void init_adc() {
    adc_init();
    adc_gpio_init(PIN_ANAL1);
    adc_select_input(0);
}

void init_hw() {

    init_pin_out_low(PIN_LED1R);
    init_pin_out_low(PIN_LED1G);
    init_pin_out_low(PIN_LED2R);
    init_pin_out_low(PIN_LED2G);
    init_pin_out_low(PIN_LED3R);
    init_pin_out_low(PIN_LED3G);
    init_pin_out_low(PIN_LED4R);
    init_pin_out_low(PIN_LED4G);
    init_pin_out_low(PIN_LED5R);
    init_pin_out_low(PIN_LED5G);

    init_pin_in(PIN_SW1);
    init_pin_in(PIN_SW2);
    init_pin_in(PIN_SW3);
    init_pin_in(PIN_SW4);
    init_pin_in(PIN_SW5);

    init_pin_out_low(PIN_MUXA);
    init_pin_out_low(PIN_MUXB);
    init_pin_out_low(PIN_MUXC);
    
}