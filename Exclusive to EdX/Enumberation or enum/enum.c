#include <stdio.h>
enum days{monday = 1,tuesday,wednesday,thursday,friday,saturday,sunday};
int main (void){
    enum days day_sth;
    printf("%d",day_sth=tuesday);
}