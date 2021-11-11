#include<stdio.h>

int main(void){
    int arr[4] = {2,-4,3,-2};
    for(int i = 0;i<4;i++){
        if(arr[i]<0) continue;
        printf("%d",arr[i]);
    }
}