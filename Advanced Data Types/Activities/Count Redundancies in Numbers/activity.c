#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void); 
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
int countRedun(struct digit*);
struct digit* sameNumFunc(struct digit*, struct digit*);


// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

struct digit* sameNumFunc(struct digit* ptr1,struct digit* ptr2){
    struct digit* sameNumPtr = ptr1;
    struct digit* currentPtr = ptr2;
    int num = 0;
    int before = 0;
    before = sameNumPtr->num;
    while(currentPtr != NULL && num != 1){
        while(sameNumPtr != NULL && currentPtr->num != sameNumPtr->num){
            before = sameNumPtr->num;
            sameNumPtr = sameNumPtr->next;
        }
        if(currentPtr->num == before){
            currentPtr = currentPtr->next;
            sameNumPtr = ptr1;
            
        }
        else if(sameNumPtr == NULL){
             num++; 
        }
        else if(currentPtr->num == sameNumPtr->num){ // for 223322
            currentPtr = currentPtr->next;
            sameNumPtr = ptr1;
        }
        else if(sameNumPtr != NULL){
            currentPtr = currentPtr->next;
        }
        else{
            num++;
        }
    } 
    return currentPtr;
}
int countRedun(struct digit *ptr){
    int currentCount = 0;
    int count;
    int times = 0;
    struct digit *tempPtr, *movingPtr, *sameNumPtr1,*sameNumPtr2;
    struct digit* sameNumPtrHead;
    tempPtr  = movingPtr = ptr;
    //tempPtr will take a value from the linked list and change its value every time after the while loop is executed. 
    //movingPtr will change value everytime the inside while loop is executed, checking if it has any same value as tempPtr.
    while(tempPtr != NULL){
        count = 0;
        movingPtr = tempPtr->next;

        while(movingPtr != NULL){
            if(movingPtr->num == tempPtr->num){
                count++;
            }
            movingPtr = movingPtr->next;
        }
        if(times == 0){
            sameNumPtr1 = createDigit(tempPtr->num);
            sameNumPtrHead = sameNumPtr1;
            times++;
        }
        else{
            sameNumPtr2 = createDigit(tempPtr->num);
            sameNumPtr1 = append(sameNumPtr1,sameNumPtr2);
        }

        currentCount += count;
        tempPtr = sameNumFunc(sameNumPtrHead,tempPtr); //if it finds the same digit in the linked list, the func will skip the tempPtr to next one
    }
    freeNumber(sameNumPtrHead);
    return currentCount;
}
// Write your countRedun() function here