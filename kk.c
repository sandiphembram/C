#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing the newline character at the end of each string
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("Length of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("The strings are equal.\n");
    } else if (comparison < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    return 0;
}
