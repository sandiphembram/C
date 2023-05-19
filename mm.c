#include <stdio.h>
#include <string.h>

int main() {
    char sentence1[100];
    char sentence2[100];

    printf("Enter the first sentence: ");
    fgets(sentence1, sizeof(sentence1), stdin);

    printf("Enter the second sentence: ");
    fgets(sentence2, sizeof(sentence2), stdin);

    char *ptr1 = sentence1;
    char *ptr2 = sentence2;

    int comparison = strcmp(ptr1, ptr2);

    if (comparison == 0) {
        printf("The sentences are equal.\n");
    } else if (comparison < 0) {
        printf("The first sentence is lexicographically smaller than the second sentence.\n");
    } else {
        printf("The first sentence is lexicographically larger than the second sentence.\n");
    }

    return 0;
}
