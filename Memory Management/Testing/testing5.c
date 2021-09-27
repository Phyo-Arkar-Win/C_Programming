#include<stdio.h>
int* combine(int*,int*,int*);
int main(void){
    int A[5]={1,2,3,4,5};
    int B[5]={6,7,8,9,10};
    int CombinedArr[20];
    int* CombinedPtr = CombinedArr;
    CombinedPtr = combine(A,B,CombinedArr);
    int i=0;
    while(CombinedPtr[i]!='\0'){
        printf("%d,",CombinedPtr[i]);
        i++;
    }
}
int* combine(int* a,int* b,int* combined){
    for(int i=0;i<5;i++){
        combined[i]=a[i];
    }
    int j=5;
    for(int i=0;i<5;i++){
        combined[j]=b[i];
        j++;
    }
    return combined;
}