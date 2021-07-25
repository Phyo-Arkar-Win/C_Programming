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
void behind(int* ptr,int num){
    int high = ptr[0];
    for(int i=0;i<num;i++){
        if(ptr[i]>high){
            high = ptr[i];
        }
    }
    for(int j=0;j<num;j++){
        ptr[j] = high - ptr[j];
    }
}