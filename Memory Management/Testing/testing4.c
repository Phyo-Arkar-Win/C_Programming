#include<stdio.h>
int main(void){
    int a = 5;
    void* ptr;
    int* intptr = &a;
    ptr = intptr;
    printf("The address of intptr is %p and the value is %d\n",intptr,*intptr);
    //printf("The address of voidptr is %p and the value is %d\n",ptr,*ptr);
    printf("The address of voidptr is %p",ptr);
}