//program to find whether a number is an Armstrong number or not
#include <stdio.h>
int main(){
    int n , original ,sum=0 ;
    printf("Enter a number: "); // enter a number
    scanf("%d",&n);
    original = n; // store the original number
    while(n!=0){
        int r=n%10; // find the last digit
        sum = sum + (r*r*r); // add the cube of the last digit to sum
        n=n/10; // remove the last digit from n
    }
    if(sum==original) // check if the sum of cubes of digits is equal to the original number
        printf("The number is an Armstrong number");
    else
        printf("The number is not an Armstrong number");
    return 0;
}
 