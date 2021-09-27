#include<stdio.h>
#include<stdlib.h>
void instruction();
int addition(int*,int);
int subtraction(int*,int);
int multiplication(int*,int);
int division(int*,int);

int main(void){
    int num, output, calc;

    // Instruction Printing
    instruction();

    printf("Enter how many numbers you want involved in the calculation : ");
    scanf("%d",&num);
    int* numbers;
    numbers = (int*)calloc(num,sizeof(int)); // Dynamic Memory Allocation for array of inputs

    // Loop for number inputs
    for(int i=0;i<num;i++){
        printf("Please enter a number : ");
        scanf("%d",&(numbers[i]));
    }
    
    // Function Pointer Declaration
    int (*funcArr[4])(int*,int) = {addition,subtraction,multiplication,division};

    // Choosing the calculation type
    printf("Press 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division : ");
    scanf("%d",&calc);
    printf("\n");

    // Function call
    output = (*funcArr[calc-1])(numbers, num);

    printf("The final result of the calculation is %d.\n",output);
    free(numbers);
    printf("Program successfully excuted!");
    return 0;
}

void instruction(){
    printf("\nThis is a simple calculator program.\n");
    printf("First, you have to enter how many numbers you want involved in the calculations.\n"
            "Then, you have to enter the numbers.\n"
            "After, you have to enter a specific number set by the program to complete your calculation.\n\n");
}

int addition(int* arr, int num){
    int output = 0;
    for(int i=0;i<num;i++){
        output = output + arr[i];
    }
    return output;
}
int subtraction(int* arr, int num){
    int output = 0;
    if(num>2){
        printf("You can only subtract 2 numbers at a time!\n");
        printf("Program exiting!\n\n");
        exit(0);
    }
    else{
        return output=arr[0]-arr[1];
    }
}
int multiplication(int* arr, int num){
    int output = 1;
    for(int i=0;i<num;i++){
        output = output * arr[i];
    }
    return output;
}
int division(int* arr, int num){
    int output;
    if(num>2){
        printf("You can only divide 2 numbers at the same time!");
        printf("Program exiting!");
        exit(0);
    }   
    else{
        output = arr[0]/arr[1];
        return output;
    }
}