//program to check whether a given year is a leap year.
#include <stdio.h>
int main() {
    int year;
    printf("enter a year: "); //enter a year to check if it is a leap year or not
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) { //condition for leap year
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    } 
        return 0;
}

//Note:condition for leap year is that the year should be divisible by 4 and not divisible by 100 or it should be divisible by 400.