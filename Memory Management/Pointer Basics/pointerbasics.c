#include<stdio.h>
int main(void){
    
    int a = 3;
    int *ptr = &a;
    printf("The first statement: %p\n",ptr);
    printf("The second statement: %d",*ptr);

}