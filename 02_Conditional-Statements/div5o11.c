//program to check whether a number is divisible by both 5 and 11.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: "); //prompt user for input
    scanf("%d", &num);
    if (num % 5 ==0 && num % 11 == 0) { // check if the number is divisible by both 5 and 11
        printf("%d is divisible by both 5 and 11 \n", num);
    } else {
        printf("%d is not divisible by both 5 and 11 \n", num);
    }
    return 0;
}