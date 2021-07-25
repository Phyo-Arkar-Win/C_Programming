// Allocating the contiguous space in memory for specific number of blocks with the element size
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int* intptr;
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    intptr=(int*)calloc(num,sizeof(int));// num numbers of blocks with the size of int
    for(int i=0;i<num;i++){
        intptr[i]=i+1*10;
    }
    printf("The elements of the array are: ");
    for(int i=0;i<num;i++){
        printf("%d,",intptr[i]);
    }
}
