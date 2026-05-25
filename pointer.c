#include <stdio.h>

int main() {
    char c = 'A';          // declare a character variable
    char *ptr = NULL;      // pointer to char
    char **dptr = NULL;    // pointer to pointer

    ptr = &c;              // store address of c
    dptr = &ptr;           // store address of ptr

    printf("Address of dptr-1: %p\n", (void*)(dptr - 1));
    printf("Address of dptr  : %p\n", (void*)dptr);
    printf("Address of dptr+1: %p\n", (void*)(dptr + 1));

    printf("Size of pointer: %lu bytes\n", sizeof(ptr));

    return 0;
}