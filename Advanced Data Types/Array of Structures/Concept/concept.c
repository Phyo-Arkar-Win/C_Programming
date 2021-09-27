#include<stdio.h>

struct point{
    int x; int y;
};

void scan(struct point *);
void printTriangle(struct point *);

int main(void){
    struct point triangle[3];
    scan(triangle); // no need & due to triangle being an array
    triangle[0]->x = 1; triangle[0].y = 0;
    (triangle+2)->x = 3; (*(triangle+2)).y = 3; // -> dereferences so it is basically (*(triangle+2)).x = 3; left and right same
    printTriangle(triangle);
}

void scan(struct point *ptr){
    printf("Please enter the X coordinate : ");
    scanf("%d",&(ptr+1)->x);
    printf("Please enter the Y coordinate : ");
    scanf("%d",&(ptr+1)->y);
}

void printTriangle(struct point *ptr){
    printf("\t(%d,%d)",ptr[0].x, ptr[0].y);
    printf("\n\n");
    printf("(%d,%d)\t\t(%d,%d)",ptr[1].x,ptr[1].y,ptr[2].x,ptr[2].y);
}