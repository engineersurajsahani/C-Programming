#include <stdio.h>

int main() {
    int number = 42; // Declare an integer variable
    int *pointer;   // Declare a pointer to an integer

    pointer = &number; // Initialize the pointer with the address of 'number'

    // Access and print the value of 'number' using the pointer
    printf("Value of 'number' using pointer: %d\n", *pointer);

    // Modify 'number' indirectly through the pointer
    *pointer = 100;

    // Print the updated value of 'number'
    printf("Updated value of 'number': %d\n", number);

    return 0;
}
