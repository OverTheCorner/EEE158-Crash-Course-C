// functions.c
// Demonstrates functions and scope in C
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 7);
    printf("5 + 7 = %d\n", result);
    // Exercise: Write your own function to multiply two numbers
    return 0;
}
