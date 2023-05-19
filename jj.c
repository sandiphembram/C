#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
    } else {
        int result = factorial(n);
        printf("The factorial of %d is %d.\n", n, result);
    }

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
