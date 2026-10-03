//program to count how many digits are present in a number.
#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        num = num / 10; //logic to remove the last digit from the number
        count++; //logic to increment the count of digits
    }
    printf("The number of digits is: %d\n", count); 
    return 0;
}