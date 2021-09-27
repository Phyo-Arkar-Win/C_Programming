#include<stdio.h>
void printfunc();
int main(void){
    void (*print)();
    print = printfunc;
    print();
}
void printfunc(){
    printf("Hello World");
}