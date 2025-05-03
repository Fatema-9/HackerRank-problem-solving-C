#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Input a single character
    scanf("%c", &ch);

    // Input a string (single word)
    scanf("%s", s);

    // Clear the input buffer before reading the sentence
    scanf("\n");

    // Input a full sentence (with spaces)
    scanf("%[^\n]%*c", sen);

    // Output the values
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}

