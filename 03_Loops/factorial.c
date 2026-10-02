//program to input a number N and calculate its factorial using a loop.
#include <stdio.h>
int main(){
    int N , factorial; //N is the number whose factorial is to be calculated and factorial is the variable to store the result.
    factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){ //loop to calculate factorial
        factorial*=i; //logic to calculate factorial
    }
    printf("Factorial of %d is: %d", N, factorial); 
    return 0;
}