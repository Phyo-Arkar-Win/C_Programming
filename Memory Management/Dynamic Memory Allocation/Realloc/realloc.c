#include<stdio.h>
#include<stdlib.h>
int main(void){
    int * intptr;
    intptr = (int*)malloc (5* sizeof(int));
    int num,numbers, currentNum;
    printf("Please enter how many numbers you want to add: ");
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        printf("Please enter a number: ");
        scanf("%d",&intptr[i]);
    }
    if(num>5){
        // !!!!!!!!!!!!!!!!!!!!!!!! //
        intptr=realloc(intptr,num*sizeof(int));
        // !!!!!!!!!!!!!!!!!!!!!!!! //
        printf("Memory Reallocating...\n");
        for(int i=5;i<num;i++){
            printf("Please enter a number: ");
            scanf("%d",&intptr[i]);
        }
        printf("Memory Reallocation successfuly!\n");
        printf("The total number is %d and The elements are: ",num);
        for(int i=0;i<num;i++){
            printf("%d,",intptr[i]);
        }
    }
    else{
        printf("Task succeeded without memory reallocation.\n");
        printf("The total number is %d and The elements are: ",num);
        for(int i=0;i<num;i++){
            printf("%d,",intptr[i]);
        }
    }
    free(intptr);
    
}