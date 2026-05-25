#include <stdio.h>

// Function that adds 100 to all elements of the array
void addNumber(int *ptr) {
    int i = 0;
    for (i = 0; i < 10; i++) {
        ptr[i] += 100;  // Same as *(ptr + i) += 100
    }
}

int main(void) {
    int i = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Display before function call
    printf(">> Before function call <<\n");
    for (i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n\n");
    
    // Call function with array (passes pointer to first element)
    addNumber(arr);
    
    // Display after function call
    printf(">> After function call <<\n");
    for (i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");

    getchar();
    
    return 0;
}