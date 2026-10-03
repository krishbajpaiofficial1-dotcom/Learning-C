//program to check whether a number reads the same forwards and backwards (palindrome) or not
#include <stdio.h>
int main() {
    int num,rev=0,original;
    printf("Enter a number: ");
    scanf("%d",&num);
    original=num; //store the original number to compare later
    while(num!=0) {
        rev=rev*10+num%10; //logic to reverse the number
        num=num/10; //logic to remove the last digit from the number
    }
    if(original==rev){
        printf("%d is a palindrome number \n",original); //if the original number is equal to the reversed number, then it is a palindrome
    }
    else{
        printf("%d is not a palindrome number \n",original); //if the original number is not equal to the reversed number, then it is not a palindrome
    }
    return 0;
}