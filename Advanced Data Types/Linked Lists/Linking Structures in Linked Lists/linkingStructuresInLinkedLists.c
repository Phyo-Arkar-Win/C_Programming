#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

int main(void){
    struct Node head = {2, NULL};
    struct Node second = {3, NULL};
    struct Node third = {1,NULL};
    struct Node *ptr;
    ptr = &head;
    head.next = &second; 
    second.next = &third;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}