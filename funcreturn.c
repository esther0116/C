#include <stdio.h>

void func1(void) {
    printf("func1 was called! \n");
}

void func2(void) {
    printf("func2 was called! \n");
}

// Function that returns a function pointer
// Return type: void (*)(void) - pointer to a function that takes void and returns void
// Parameter: int sel
void (*whatFunction(int sel))(void) {
    if (sel == 1)
        return func1;
    else if (sel == 2)
        return func2;
    return NULL;  // Return NULL if invalid selection
}

int main(void) {
    void (*fPtr)(void);  // Function pointer declaration
    
    fPtr = whatFunction(1);  // fPtr points to func1
    fPtr();                   // Call func1 through pointer
    
    fPtr = whatFunction(2);  // fPtr points to func2
    fPtr();                   // Call func2 through pointer
    
    printf("\n");
    return 0;
}