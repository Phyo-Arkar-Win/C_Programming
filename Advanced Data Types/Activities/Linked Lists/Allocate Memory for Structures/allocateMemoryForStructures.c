#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    struct point *ptr;
    int num;
    scanf("%d",&num);
    ptr = (struct point*) malloc(num*sizeof(struct point));
    initializePoly(ptr,num);
    printPoly(ptr,num);
    free(ptr);
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *ptr, int num){
    ptr[0].x = 0; ptr[0].y = 0;
    for(int i=0;i<num;i++){
        ptr[i].x = -i;
        ptr[i].y = i*i;
    }
}