#include<stdio.h>

struct info{
    char name[20];
    int age;
};

void printStatements(struct info person);

int main(void){
    struct info person1;
    struct info person2 = {.age=18,.name="Tony"};
    struct info person3 = {"Someone",20};
    printf("Please enter the name and age of person 1.\nName : ");
    scanf("%s",person1.name);
    printf("Age : ");
    scanf("%d",&person1.age);

    printStatements(person1);
    printStatements(person2);
    printStatements(person3);
    
}
void printStatements(struct info person){
    printf("The name of person is %s and the age is %d\n",person.name,person.age);
}
