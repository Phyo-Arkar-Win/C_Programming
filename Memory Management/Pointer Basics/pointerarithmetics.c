#include <stdio.h>
int main(void) {
    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    int *ptr, *ptr2;
    
    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1], &array[5]);
    // array equals &array[0]
    ptr = array;
    ptr2 = &array[0];
    
    *ptr = 10; // assigning the value 10 to array[0]
    *(ptr + 1) = 5; // assigning the value 5 to array[1]
    *(ptr + 2) = -1;
    
    *array = 3; // assigning the value 3 to array[0]
    *(array + 1) = 10; // assigning the value 10 to array[1]
    *(array + 2) = 99;
    
    ptr++; // the ptr pointer now has the address of array[1]
    *ptr = 7; // assigning the value of 7 to array[1]
    
    ptr += 3; // the ptr pointer now has the address of array[4]
    *ptr = 5; // assigning the value of 5 to array[4]

    // Differences //
    ptr = array+2; //ptr will move to array[2]
    *array + 4; // will deference the array[0] and combine 4 to the value
    *(array+4); // will move to array[4] and dereference it
    
    return 0;
}