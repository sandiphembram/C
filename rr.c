#include <stdio.h>

void addNumbers(int* num1, int* num2, int* result) {
    *result = *num1 + *num2;
}

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &sum);

    printf("Sum: %d\n", sum);

    return 0;
}
