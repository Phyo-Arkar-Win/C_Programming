#include<stdio.h>
void swap(int *, int *);
int main(void){
    int a = 3;
    int b = 5;
    swap(&a,&b);
    printf("First number:%d\nSecond Number:%d",a,b);
}
void swap(int *a,int *b){
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}