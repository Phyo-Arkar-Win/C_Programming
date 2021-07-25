#include<stdio.h>
int main(void){
   int a[4]={5,3,6,7};
   int b[3]={23,45,6};
   int *aptr=a, *bptr=b;
   int *ptr[]={aptr,bptr};
   printf("First Statement: %d\n",*(aptr+1)); 
   printf("Second Statement: %d\n",*(ptr+1));
}