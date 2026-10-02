//program to input N and calculate the sum of all even numbers from 1 to N.
#include <stdio.h>
int main() {
    int N,sum=0;
    printf("enter a number: "); //enter a number to calculate the sum of all even numbers from 1 to N
    scanf("%d", &N);
    for(int i=1;i<=N;i++) { //loop to iterate from 1 to N
        if(i%2==0) { //condition to check if the number is even
            sum+=i; //add the even number to sum
        }
    }
    printf("the sum of all even numbers from 1 to %d is %d.", N, sum);
    return 0;
}