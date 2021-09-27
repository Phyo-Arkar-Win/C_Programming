// a->b == (*a).b

#include<stdio.h>

struct info{
    char name[20];
    int age;
};

void func(struct info *);

int main(void){
    struct info argument;
    struct info *ptr;
    func(&argument);
}

void func(struct info *var){
    var->age = 16;
    scanf("%s",var->name);
    scanf("%d",&var->age);
    printf("Name : %s , Age : %d",var->name,var->age);
}
