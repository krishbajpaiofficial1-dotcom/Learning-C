//program to input an integer and print its reverse.
#include <stdio.h>
int main(){
    int n,rev=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(n!=0) //n is not equal to 0, then the loop will continue to execute
    {
        rev=rev*10+n%10;//logic to calculate reverse of the number
        n=n/10; //logic to remove the last digit from the number
    }
    printf("The reverse of the entered number is: %d", rev); //print the reverse of the number
    return 0;
}