#include<stdio.h>

struct info{
    char name[20];
    int age;
};

void func(struct info *);

int main(void){
    struct info person1;
    func(&person1);
}
void func(struct info *p){
    printf("Name : ");
    scanf("%s",(*p).name);
    printf("Age : ");
    scanf("%d",&(*p).age);
    printf("Name - %s , Age - %d",(*p).name,(*p).age);
}