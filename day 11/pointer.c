#include <stdio.h>

int main() {
    int num;
    float fnum;
    char ch;
    void *ptr;

    int choice;
    printf("Choose a variable to find its memory location:\n");
    printf("1. Integer\n2. Float\n3. Character\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &num);
            ptr = &num;
            printf("Memory location of integer: %p\n", (void*)ptr);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &fnum);
            ptr = &fnum;
            printf("Memory location of float: %p\n", (void*)ptr);
            break;
        case 3:
            printf("Enter a character: ");
            scanf(" %c", &ch);
            ptr = &ch;
            printf("Memory location of character: %p\n", (void*)ptr);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}