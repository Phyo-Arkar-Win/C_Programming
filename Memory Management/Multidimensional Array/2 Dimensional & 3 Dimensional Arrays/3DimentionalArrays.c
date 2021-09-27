#include<stdio.h>
void printFunc(int***);
int main(void){
    int A[3]={1,2,3};
    int B[3]={4,5,6};
    int* Ptr1[2]={A,B};

    int C[3]={7,8,9};
    int D[3]={10,11,12};
    int* Ptr2[2]={C,D};

    int** Ptr[2]={Ptr1,Ptr2};

    printFunc(Ptr);
}
void printFunc(int*** Pointer){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d,",Pointer[i][j][k]);
            }
        }
    }
}