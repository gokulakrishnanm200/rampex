#include<stdio.h>
#include<ctype.h>
 
int main() {
    char str [25];
    int vowels=0;
    int consonants=0;
    printf("enter a line:");
    fgets(str, 25, stdin);
    for(int i=0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    return 0;
}