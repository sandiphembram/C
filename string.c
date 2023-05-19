#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int state = 0; // 0 represents outside a word, 1 represents inside a word

    // Iterate through each character in the string
    while (*str) {
        // If the current character is a whitespace (space, tab, newline), set the state to outside a word
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            state = 0;
        }
        // If the current character is not a whitespace and the state is outside a word, increment the count and set the state to inside a word
        else if (state == 0) {
            state = 1;
            count++;
        }

        // Move to the next character
        str++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Total number of words: %d\n", wordCount);

    return 0;
}
