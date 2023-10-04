#include <stdio.h>

// Define a union named 'Value' to store either an integer or a floating-point number
union Value {
    int intValue;
    float floatValue;
};

int main() {
    // Declare a variable of type 'union Value'
    union Value data;

    // Assign an integer value
    data.intValue = 42;

    // Access and print the integer value
    printf("Integer Value: %d\n", data.intValue);

    // Assign a floating-point value
    data.floatValue = 3.14;

    // Access and print the floating-point value
    printf("Float Value: %.2f\n", data.floatValue);

    // The same memory location now contains a floating-point value, which overwrites the integer value

    return 0;
}
