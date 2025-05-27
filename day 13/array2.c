#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr, n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    
    arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }
    
    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    
    free(arr);
    
    return 0;
}