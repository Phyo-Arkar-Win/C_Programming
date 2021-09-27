// Allocating the memory in the heap and passes its address to the pointer
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int* intptr;
    intptr=(int *)malloc(5*sizeof(int));

    // For checking what elements there are in the heap during malloc
    printf("Elements in the array before the looping are : ");
    for(int i=0;i<5;i++){
        printf("%d ",intptr[i]);
    }

// Assigning values to the elements of the array
    for(int i=0;i<5;i++){
        intptr[i]=i+10;
    }
    printf("\nThe elements of the arrays are: ");
    for(int i=0;i<5;i++){
        printf("%d, ",intptr[i]);
    }
    free(intptr);
}
