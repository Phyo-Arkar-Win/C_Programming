#include<stdio.h>
cc main.c print.c
void printFunc(int*);
int main(void){
    int arr[5] = {1,2,3,4};
    printFunc(arr);
}