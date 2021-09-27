//In this problem you will continue developing the data feature which you started implementing in the previous problem. 
//You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". 
//The function advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. 
//You do not have to take into account leap years (although you may if you wish to). 
//That is, it is okay for your function to always return March 1 as the day following February 28, no matter the year.
//You are provided with a familiar date structure definition, a main function as well as the function prototypes 
//for the readDate(), printDate(), and advanceDate() functions. Do not modify any of the given code. 
//Simply add your function definitions underneath the main() function. For the readDate() and printDate() functions 
//you may simply copy and paste the code you developed in the previous task.

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *var){
    scanf("%d %d %d",&(*var).year, &(*var).month, &(*var).day);
}

void printDate(struct date var){
    printf("%02d/%02d/%d\n",var.month, var.day, var.year);
}

struct date advanceDay(struct date today){
    struct date tomorrow;
    int d = today.day; int m = today.month; int y = today.year;
    if(m == 4 || m == 6 || m == 9 || m == 11){
        // For months with 30 days
        if(d == 30){
            d = 1;
            m += 1;
        }
        else{
            d += 1;
        }
    }
    // For December
    else if(d == 31 && m == 12){
        d = 1;
        m = 1;
        y += 1;
    }
    // For Feburary
    else if(m == 2 && d == 28){
        d = 1;
        m += 1;
    }
    else if(d == 31){
        d = 1;
        m += 1;
    }
    else{
        d += 1;
    }
    tomorrow.day = d; tomorrow.month = m; tomorrow.year = y;
    return tomorrow;
}
