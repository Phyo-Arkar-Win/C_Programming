#include<stdio.h>
void calc(int*,int*);
int main (void){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    int *aptr=&a, *bptr=&b;
    calc(&a,&b);
    printf("Task successfully done.");
}
void calc(int *a2ptr,int *b2ptr){
    printf("In calc A is %d and B is %d\n",*(a2ptr)*2, *(b2ptr)*2);
}