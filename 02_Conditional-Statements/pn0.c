//program that takes an integer as input and checks whether it is positive, negative or zero
#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer: "); //prompt user for input
    scanf("%d", &num); 
    if (num > 0){
        printf("%d is a positive integer \n", num); //it will print if the number is positive
    }
    else if (num < 0){
        printf("%d is a negative integer \n", num); //it will print if the number is negative
    }
    else{
        printf("You entered zero \n"); //it will print if the number is zero
    }
    return 0;
}