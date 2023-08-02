#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"

void ON(int pin)
{
    gpio_set_level(pin, 1);
}
void OFF(int pin)
{
    gpio_set_level(pin, 0);
}