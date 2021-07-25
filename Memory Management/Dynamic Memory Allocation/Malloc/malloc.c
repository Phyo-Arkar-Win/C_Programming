// Allocating the memory in the heap and passes its address to the pointer
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int* intptr;
    intptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        intptr[i]=i+10;
    }
    printf("The elements of the arrays are: ");
    for(int i=0;i<5;i++){
        printf("%d, ",intptr[i]);
    }
}
