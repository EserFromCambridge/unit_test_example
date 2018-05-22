
#include "mbed.h"

DigitalOut led(LED_RED);

int main()
{
    while (true) {
        led = !led; // toggle led
        wait(0.2f);
    }
}

