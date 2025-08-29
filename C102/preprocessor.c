// preprocessor.c
// Preprocessor directives in C
#include <stdio.h>

#define LED_ON 1
#define LED_OFF 0
#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int led = LED_ON;
    printf("LED state: %d\n", led);
    printf("Max of 3 and 7: %d\n", MAX(3,7));
    // Exercise: Create your own macro for min value
    return 0;
}
