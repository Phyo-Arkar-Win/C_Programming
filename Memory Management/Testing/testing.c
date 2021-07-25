#include<stdio.h>
void function(int*,int*);
void function2(int*, int);
int main(void){
    int a=3,b=5,num=4;
    int array[]={1,3,4,5};
    int *aptr= &a, *bptr= &b;
    function(aptr,bptr);
    function2(array, num);
    //printf("%d",array[10]);
    printf("The array in main is ");
    for(int i=0;i<num;i++){
        printf("%d ",array[i]);
    }
}
void function(int *x,int *y){
    printf("The first number is %d & the second is %d\n",*x+10,*y+10);
}
void function2(int *sth,int num){
    printf("The numbers are ");
    for(int i=0;i<num;i++){
        sth[i]=sth[i]+10;
        printf("%d ",sth[i]);
    }
    printf("\n");
}