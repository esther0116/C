#include<stdio.h>

void main(void){
    char c='a';
    char*ptr=NULL;
    ptr=&c;

    printf("ptr-1 : 0x%0x \n",ptr-1);
    printf("ptr : 0x%0x \n",ptr);
    printf("ptr+1 : 0x%0x \n",ptr+1);


    printf("size of data type : %d\n\n",sizeof(c));
}