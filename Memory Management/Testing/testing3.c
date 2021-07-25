#include <stdio.h>
#include <stdlib.h>
int main(void) {
    //! showMemory(start=438, cursors=[a,b,c])
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int *a;
    a = (int *)calloc(num, sizeof(int));
    for(int i=0;i<num;i++){
        a[i]=i*20;
    }
    printf("The elements of the arrary are: ");
    for(int i=0;i<num;i++){
        printf("%d",a[i]);
    }
    
}