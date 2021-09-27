#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* append(struct Node*,struct Node*);
void printFunc(struct Node*);

int main(void){
    struct Node head = {2,NULL};
    struct Node second = {3,NULL};
    struct Node third = {1,NULL};
    struct Node *ptr, *start;
    ptr = start =  &head; // start for printFunc
    ptr = append(ptr,&second); // ptr is second and head.next is now &second
    ptr = append(ptr,&third); // ptr is third and second.next is now &third
    printFunc(start);
}
struct Node* append(struct Node* start,struct Node* end){
    start->next = end; // assigning &second to head.next
    return start->next; // return head.next to ptr
}
void printFunc(struct Node *ptr){
    struct Node *keepTrack;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}