#include<stdio.h>
int main(void){
    int a=3;
    double db=0.3;
    int arr[4]={55,44,3,2};
    printf("Size of array %zu\n",sizeof(arr));
    printf("Size of an integer: %zu\n",sizeof(a));
    printf("Size of double: %zu",sizeof(db));
    return 0;
}