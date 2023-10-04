#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int addThree(int a, int b, int c) {
    return a + b + c;
}

float addFloat(float a, float b) {
    return a + b;
}

int main() {
    int result1 = add(5, 10);
    int result2 = addThree(5, 10, 15);
    float result3 = addFloat(2.5f, 3.7f);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %.2f\n", result3);

    return 0;
}
