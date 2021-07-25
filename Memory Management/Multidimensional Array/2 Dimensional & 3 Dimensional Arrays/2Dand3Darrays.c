#include<stdio.h>
int main(void){
    int a[2];
    int b[]={2,4};
    int c[]={5,7};
    int d[]={33,12};
    int *array1[]={a,b};
    int *array2[]={c,d};
    int **combinedArray[]={array1,array2};
    printf("Function has started.\n");
    printf("Please enter the first number: ");
    scanf("%d",&a[1]);
    printf("Please enter the second number: \n");
    scanf("%s",combinedArray[0][0][0]);
    printf("%d\n",array1[1][0]);
    printf("%d\n",combinedArray[1][1][0]);
    printf("%d\n",combinedArray[0][0][0]);
    printf("%d",combinedArray[0][0][1]);
    //Initialization of 2D arrays
}