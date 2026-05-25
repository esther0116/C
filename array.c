#include <stdio.h>

int main(void) {
    int arr[3] = {7, 14, 21};
    
    printf("%d \n", arr[2]);      // Prints: 21
    printf("%d \n", *(arr + 2));  // Prints: 21
    
    getchar();
    
    return 0;
}