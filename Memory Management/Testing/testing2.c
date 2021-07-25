#include<stdio.h>
int main(void){
    int a[]={1,3};
    int b[]={2,4};
    int c[]={5,7};
    int d[]={33,12};
    int *array1[]={a,b};
    int *array2[]={c,d};
    int **combinedArray[]={array1,array2};
    printf("%d\n",array1[1][0]);
    printf("%d",combinedArray[1][1][0]);
}