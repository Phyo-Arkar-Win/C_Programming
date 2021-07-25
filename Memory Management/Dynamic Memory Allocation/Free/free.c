//Frees the space allocated by malloc, calloc, etc
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int* intptr1, * intptr2;
    intptr1=(int*)malloc(5*sizeof(int));
    *intptr1=10;
    printf("The number is %d and the number is at the location %p\n",*intptr1,intptr1);
    free(intptr1);
    intptr2=(int*)malloc(10*sizeof(int));
    *intptr2=15;
    printf("The number is %d and the number is at the location %p",*intptr2,intptr2);
    free(intptr2);
}