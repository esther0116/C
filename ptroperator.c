#include<stdio.h>
 
void main(void){

    char c='a';
    char *ptr=NULL;
    ptr=&c;
    printf("ptr :0x%0x \n",ptr);
    printf("*ptr : %c \n\n",*ptr);
}