#include<stdio.h>

void swap(int* n1,int* n2){
    int temp=*n1;

    *n1=*n2;
    *n2=temp;

}//end of swap

void main(void){
    int num1=10;
    int num2=50;
    printf(">>Before function call<<\n");
    printf("num1: %d\nnum2 : %d\n\n",num1,num2);

    swap(&num1,&num2);//call swap function

    printf(">>After function call<<\n");
    printf("num1 : %d\nnum2 : %d\n\n",num1,num2);
    
    

}//end main