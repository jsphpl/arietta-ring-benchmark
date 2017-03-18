#include <stdbool.h>
#include "gpiolib.c"

#define DIR_IN  1
#define DIR_OUT 0
#define PIN_OUT 64
#define PIN_IN  65

bool input;

void main() {
    while (true) {
        // Read value
        gpioexport(PIN_IN);
        gpiosetdir(PIN_IN, DIR_IN);
        input = gpiogetbits(PIN_IN);

        // Write value
        gpioexport(PIN_OUT);
        gpiosetdir(PIN_OUT, DIR_OUT);
        if (input == 1) {
            gpioclearbits(PIN_OUT);  // set low
        } else {
            gpiosetbits(PIN_OUT);    // set high
        }
    }
}

