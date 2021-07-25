#include<stdio.h>

int main(void){
    int num[4]= {45,55,3,4};
    int max= num[0];
    for(int i=0;i<=4;i++){
        if (num[i]>max){
            max = num[i];
        }
    }
    printf("The largest number is %d",max);
}