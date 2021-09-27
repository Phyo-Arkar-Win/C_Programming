#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* valueAssign();
struct Node* append(struct Node*,struct Node*);
struct Node* printFunc(struct Node*);

int main(void){
    struct Node *ptrToHead,*ptr2,*ptr3,*freePtr;
    int num;
    printf("Please enter how many nodes you want : ");
    scanf("%d",&num);
    ptrToHead = valueAssign(); // return the address of allocated memory to ptr;
    ptr2 = ptr3 = freePtr = ptrToHead;
    if(num>1){
        for(int i=1;i<num;i++){
            ptr3 = valueAssign(); // return the address of new allocated memory to ptr3
            ptr2 = append(ptr2,ptr3); // ptr2 now gained the address of ptr2->next which is ptr3 and ptr2->next is ptr3
        }
        printf("The datas are : ");
        while(ptrToHead!=NULL){
            freePtr = ptrToHead;
            ptrToHead = printFunc(ptrToHead);
            free(freePtr);
        }
    }
    else{
        printf("The data is %d",ptrToHead->data);
        return 0;
    }

    
}
struct Node* valueAssign(){
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node)); // allocate space in the heap.
    printf("Please enter the data : ");
    scanf("%d",&ptr->data);
    ptr->next = NULL;
    return ptr;
}

struct Node* append(struct Node* first, struct Node* second){
    struct Node *ptr;
    first->next = second;
    return first->next;
}

struct Node* printFunc(struct Node* ptr){
    printf("%d ",ptr->data);
    return ptr->next;
}
