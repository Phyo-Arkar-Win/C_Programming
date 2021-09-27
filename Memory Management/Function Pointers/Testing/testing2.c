#include<stdio.h>

int func(int, int, int(*)(int,int));
int addition(int, int);
int substraction(int,int);

int main(void){
    int a = 3,b = 2,total;
    total = func(a,b,addition);
    total = func(a,b,substraction);
    printf("The result is %d",total);
}
int func(int x,int y,int(*jumper)(int,int)){
    jumper(x,y);
}
int addition(int x,int y){
    return x+y;
}
int substraction(int x,int y){
    return x-y;
}