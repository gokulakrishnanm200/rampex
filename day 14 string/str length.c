#include<stdio.h>
 
int main() {
    char str[100];
    int length=0;
    printf("enter the line:");
    fgets(str,100,stdin);

    while (str[length] != '\0') {
        length++;
    }
     
    printf("length of the string %d",length);
    return 0;
    
}