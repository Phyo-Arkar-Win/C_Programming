#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* valueAssign(int);
struct Node* append(struct Node*,struct Node*);
void printFunc(struct Node*);
void freeFunc(struct Node*);
struct Node* reverseAppend(struct Node*,struct Node*);
void reverseFunc(struct Node*);
struct Node* sortFunc(struct Node*);
struct Node* sortAppend(struct Node*,struct Node*);

int main(void){
    struct Node *ptrToHead,*ptr2,*ptr3,*freePtr,*sortPtr;
    int num,value;
    printf("Please enter how many nodes you want : ");
    scanf("%d",&num);
    printf("Please enter the data : ");
    scanf("%d",&value);
    ptrToHead = valueAssign(value); // return the address of allocated memory to ptr;
    ptr2 = ptr3 = freePtr = ptrToHead;
    if(num>1){
        for(int i=1;i<num;i++){
            printf("Please enter the data : ");
            scanf("%d",&value);
            ptr3 = valueAssign(value); // return the address of new allocated memory to ptr3
            ptr2 = append(ptr2,ptr3); // ptr2 now gained the address of ptr2->next which is ptr3 and ptr2->next is ptr3
        }
        printf("The datas are : ");
        printFunc(ptrToHead);
    }
    else{
        printf("The data is %d",ptrToHead->data);
        return 0;
    }
    reverseFunc(ptrToHead);
    sortPtr = sortFunc(ptrToHead);
    printf("\nThe sorted numbers are : ");
    printFunc(sortPtr);
    freeFunc(ptrToHead);
}
struct Node* valueAssign(int value){
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node)); // allocate space in the heap.
    ptr->data = value;
    ptr->next = NULL;
    return ptr;
}

struct Node* append(struct Node* first, struct Node* second){
    struct Node *ptr;
    first->next = second;
    return first->next;
}

void printFunc(struct Node* ptr){
    struct Node* tempPtr = ptr;
    while(tempPtr != NULL){
        printf("%d ",tempPtr->data);
        tempPtr = tempPtr->next;
    }
}

struct Node* reverseAppend(struct Node* first,struct Node* second){
    second->next = first; // second->next will point to the address of first connecting the second ptr to the first
    return second; 
}

void reverseFunc(struct Node* ptr){
    struct Node* firstPtr, *tempPtr, *secondPtr; // firstPtr is a new pointer that will point to the starting of the reverseFunc
    tempPtr = ptr; // tempPtr is a copy of ptrToHead from main
    firstPtr = valueAssign(tempPtr->data); // firstPtr now has value of ptrToHead->data and firstPtr->next is NULL
    tempPtr = tempPtr->next;

    while(tempPtr != NULL){
        secondPtr = valueAssign(tempPtr->data); // secondPtr will receive the tempPtr->data which is the data to the location that is pointed
        firstPtr = reverseAppend(firstPtr,secondPtr); // firstPtr is now gets the address of secondPtr
        tempPtr = tempPtr->next;
    }
    printf("\nReverse datas are : ");
    printFunc(firstPtr);
}
struct Node* sortAppend(struct Node* startPtr, struct Node* secondPtr){
    struct Node* first = startPtr;
    struct Node* second = secondPtr;
    struct Node* oneBefore = NULL;
    // startPtr will always contain the smallest value
    while(first != NULL && first->data < second->data){ // function will find if there are any numbers bigger than second->data in the linked list
        oneBefore = first;
        first = first->next;
    }
    if(oneBefore == NULL){ // if the first first->data is bigger than second->data, the oneBefore will be NULL and will enter this function
        startPtr = reverseAppend(first,second); // if second->data is bigger than first->data, this function will be excuted immediately and stores the smallest num in startPtr
    }
    else{
        oneBefore->next = second;
        second->next = first;
    }
    return startPtr;
}
struct Node* sortFunc(struct Node* ptr){
    struct Node* tempPtr, *secondPtr; // tempPtr is a copy of ptrToHead
    struct Node* startOfSort; // startOfSort will be the starting pointer that points to the start of sorted list
    tempPtr = ptr; 
    startOfSort = valueAssign(tempPtr->data);
    tempPtr = tempPtr->next;
    while(tempPtr != NULL){
        secondPtr = valueAssign(tempPtr->data);
        startOfSort = sortAppend(startOfSort,secondPtr); // send the starting point of the list and the second ptr
        tempPtr = tempPtr->next;
        printf("\n");
        printFunc(startOfSort);
    } 
    return startOfSort;
}

void freeFunc(struct Node* ptr){
    struct Node* tempPtr = ptr;
    while(ptr != NULL){
        tempPtr = ptr->next;
        free(ptr);
        ptr = tempPtr;
    }
}
