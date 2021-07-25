#include<stdio.h>
int calculate(int);
int main(void){
    int num,result;
    printf("Please enter the number to output Fibonacci Numbers.\n");
    scanf("%d",&num);
    result=calculate(num);
    printf("The result is %d\n",result);
    printf("Task ended.");
}
int calculate(int n){
    int final;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        final=(calculate(n-1)+calculate(n-2));
    }
    return final;
}