// embedded_io.c
// Simulating embedded input/output
#include <stdio.h>

void digitalWrite(int pin, int value) {
    printf("Pin %d set to %d\n", pin, value);
}

int main() {
    digitalWrite(13, 1); // Set pin 13 high
    digitalWrite(13, 0); // Set pin 13 low
    // Exercise: Simulate toggling a pin every second (use a loop)
    return 0;
}
