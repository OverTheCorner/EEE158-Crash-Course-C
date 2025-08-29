// interrupts_volatile.c
// Simulating volatile and interrupt usage
#include <stdio.h>

volatile int flag = 0;

void simulate_interrupt() {
    flag = 1;
}

int main() {
    printf("Flag before interrupt: %d\n", flag);
    simulate_interrupt();
    printf("Flag after interrupt: %d\n", flag);
    // Exercise: Explain why 'volatile' is important in embedded C
    return 0;
}
