#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *var){
    scanf("%d %d %d",&(*var).year, &(*var).month, &(*var).day);
}

void printDate(struct date var){
    printf("%d/%02d/%d",var.month, var.day, var.year);
}