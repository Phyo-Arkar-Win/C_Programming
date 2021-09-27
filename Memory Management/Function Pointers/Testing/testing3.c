#include<stdio.h>

int func(int,int,void(*)(int,int));
void addition(int,int);
void substraction(int,int);

int main(void){
    int a=3,b=2;
    func(a,b,addition);
    func(a,b,substraction); 
}

int func(int x,int y,void(*jumper)(int,int)){
    jumper(x,y);
}
void addition(int x,int y){
    printf("The result from addition is %d\n",x+y);
}
void substraction(int x,int y){
    printf("The result from substraction is %d",x-y);
}