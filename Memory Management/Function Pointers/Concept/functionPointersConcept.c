#include<stdio.h>
int addition(int,int);
int main(void){
    int a,b,total;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter a second number : ");
    scanf("%d",&b);

    int (*additionPtr)(int,int); 
    // Initializtion of Function Pointer like (int a;)
    // the first data type for return data type
    // Argument types come from the func to be called

    additionPtr = &addition; // or additionPtr = addition;
    // additionPtr pointing to the address of the addition function

    total = (*additionPtr)(a,b); // or total = additionPtr(a,b);
    // Dereference additionPtr to fetch addition and pass arguments a & b.

    printf("The addition of the two numbers is : %d",total);
}
int addition(int c,int d){
    int total = c+d;
    return total;
}