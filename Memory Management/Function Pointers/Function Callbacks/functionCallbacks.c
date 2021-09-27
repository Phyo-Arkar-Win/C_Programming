#include<stdio.h>
int func(int, int, int(*)());
int addition(int,int);
int substraction(int,int);
int main(void){
    int sign,total,a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter 1 for addition, 2 for subtraction : ");
    scanf("%d", &sign);
    if(sign == 1){
        total = func(a,b,&addition);
    }
    else if(sign == 2 ){
        total = func(a,b,&substraction);
    }
    printf("The output is %d",total);
}

int func(int x,int y, int(*jumper)(int,int)){
    jumper(x,y);
}

int addition(int x,int y){
    return x+y;
}
int substraction(int x,int y){
    return x-y;
}