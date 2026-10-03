//program that takes an integer and finds the sum of all its digits.
#include <stdio.h>
int main() {
    int num,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    while(num!=0) { 
        sum=sum+num%10; //logic to add the last digit of the number to the sum
        num=num/10; //logic to remove the last digit from the number
    }
    printf("The sum of digits is: %d\n", sum); //print the sum of digits
    return 0;
}