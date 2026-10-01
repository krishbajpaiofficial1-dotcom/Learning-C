//program to find sum of n natural numbers
#include <stdio.h>
int main (){
    int n; // to store the number of natural numbers
    int i =1; // to iterate through natural numbers
    int sum=0; // to store the sum of natural numbers
    scanf("%d" , &n); // to read the value of n from user
    while(i<=n){
        printf("%d" , i); // to print the current natural number
        i++; // increment the value of i by 1
        sum +=i; // to add the current value of i to sum
    }
    printf("Sum is : %d" , sum);
    return 0;
}