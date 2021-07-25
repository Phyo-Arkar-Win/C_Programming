#include<stdio.h>
int main(void){
    int *ptr;
    int var = 3;
    ptr = &var;
    // %d only expects printf to print int values.
    printf("First:%d\n",*ptr); // dereferencing
    printf("Second:%d\n",ptr); // not correct
    printf("Third:%p\n",ptr); // the value of ptr, the address of var
    printf("Fourth:%p\n",&ptr); // the address of ptr
    printf("Fifth:%d\n",&var); // not correct
    printf("Sixth:%p\n",&var);// the address of var/same as ptr(third one)
}