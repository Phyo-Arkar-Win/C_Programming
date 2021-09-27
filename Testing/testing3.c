#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    int* num = (int*) malloc (n*sizeof(int));
    for(int i=0;i<n;i++){
        num[i]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
}