#include<stdio.h>
#include<stdlib.h>
int addition(int*,int*);
int main(void){
    int a,b,sum;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    sum = addition(&a,&b);
    printf("The sum of two numbers is %d.",sum);
}
int addition(int* a, int* b){
    int total;
    total = *a + *b;
    return total;
}