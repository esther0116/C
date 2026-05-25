#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    int *ptr = arr;  // ptr points to the first element of arr
    
    printf("%d \n", ptr[1]);      // Prints: 14
    printf("%d \n", *(ptr + 1));  // Prints: 14
    
    return 0;
}