// structs.c
// Demonstrates structs and typedef in C
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

int main() {
    Student s1 = {"Alice", 19, 3.8};
    printf("Name: %s\nAge: %d\nGPA: %.2f\n", s1.name, s1.age, s1.gpa);
    // Exercise: Create your own Student and print its fields
    return 0;
}
