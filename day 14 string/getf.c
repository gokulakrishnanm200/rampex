#include<stdio.h>

int main() {
    char name[68];
    printf("enter your full name:");
    fgets(name,68,stdin);
    printf("%s",name);
    return 0;
    
}