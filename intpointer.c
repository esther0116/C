#include <stdio.h>

int main() {
    int num = 7;           // declare an integer
    int *ptr = NULL;       // pointer to int
    int **dptr = NULL;     // pointer to pointer

    ptr = &num;            // store address of num
    dptr = &ptr;           // store address of ptr

    printf("Address of dptr-1: %p\n", (void*)(dptr - 1));
    printf("Address of dptr  : %p\n", (void*)dptr);
    printf("Address of dptr+1: %p\n", (void*)(dptr + 1));

    printf("Size of pointer: %lu bytes\n", sizeof(ptr));

    return 0;
}