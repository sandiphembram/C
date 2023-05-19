#include <stdio.h>
#include <string.h>

void printReverseString(char *str) {
    int length = strlen(str);

    // Iterate through each character in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Individual characters in reverse order: ");
    printReverseString(str);

    return 0;
}