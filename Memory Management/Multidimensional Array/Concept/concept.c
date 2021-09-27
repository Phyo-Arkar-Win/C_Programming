#include<stdio.h>
int main(void){
    int array[3][2][2] = {{{1,5},{6,2}},{{3,4},{12,8}},{{11,9},{7,10}}};
    printf("%d\n",array[0][0]);
    printf("%d\n",array[0][0][0]+2);
    printf("%d\n",*(*array)+1);  
} 