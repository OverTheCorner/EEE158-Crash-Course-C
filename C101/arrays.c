// arrays.c
// Demonstrates arrays and strings in C
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    int len = strlen(str);
    printf("Length: %d\n", len);
    // Reverse the string
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    // Exercise: Print each character on a new line
    return 0;
}
