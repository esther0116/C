#include <stdio.h>

int main(void) {
    char tmp[5] = {1, 2, 3, 4, 5};
    char *arr = tmp + 4;  // arr points to the 5th element (index 4)
    
    printf("%d \n", arr[-2]);  // Prints: 3
    
    return 0;
}