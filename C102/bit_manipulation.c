// bit_manipulation.c
// Bitwise operations for embedded systems
#include <stdio.h>

int main() {
    unsigned char reg = 0x0F; // 00001111
    // Set bit 7
    reg |= (1 << 7);
    // Clear bit 3
    reg &= ~(1 << 3);
    // Toggle bit 0
    reg ^= (1 << 0);
    printf("Register: 0x%02X\n", reg);
    // Exercise: Write code to check if bit 2 is set
    return 0;
}
