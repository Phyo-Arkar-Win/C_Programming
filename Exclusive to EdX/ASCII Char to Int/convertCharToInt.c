#include<stdio.h>
int main(void){
    char c;
    int i = '5';
    scanf("%c",&c);
    if(c >= '0' && c <= '9'){
        printf("%d\n",c-'0');
        printf("%d\n",c);
        printf("%c\n",c);
        printf("%d",i);
    }
}