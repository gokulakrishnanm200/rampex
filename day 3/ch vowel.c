#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for uniformity
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character '%c' is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is a consonant.\n", ch);
    } else {
        printf("The character '%c' is not a letter.\n", ch);
    }

    return 0;
}