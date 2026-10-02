//program to check whether a number is even or odd
#include <stdio.h>
int main (){
    int a;
    scanf("%d" , &a); 
    if (a % 2 ==0){ //check if the number is divisible by 2
    printf("%d is even" , a);} //if the number is divisible by 2 then it is even
    else{
    printf("%d is odd" , a);} //if the number is not divisible by 2 then it is odd
    return 0;
    }