//program to input a number and print its multiplication table from 1 to 10.
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: "); //prompt the user to enter a number
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num); //print the multiplication table of the input number
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i); //print the multiplication of num and i
    }
    return 0;
}