#include<stdio.h>
int main(void){
    char text[68][40];
    
    for(int i=0;i<68;i++){
        scanf("%s",text[i]);
    }
    for(int i=67;i>=0;i--){
        printf("%s ",text[i]);
    }
}