// io.c
// Demonstrates basic input/output in C
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    printf("Square: %d\n", num * num);
    // Exercise: Read two numbers and print their sum
    return 0;
}
