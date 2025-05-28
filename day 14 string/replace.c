#include <stdio.h>
#include <ctype.h>

void replaceVowels(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = '*';
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    replaceVowels(str);

    printf("String after replacing vowels: %s", str);
    return 0;
}