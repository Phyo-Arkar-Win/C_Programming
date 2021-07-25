#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}
void behind(int *array,int num){
    int largest=array[0];
    for(int i=0;i<num;i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    for(int i=0;i<num;i++){
        array[i]=largest-array[i];
    }
}