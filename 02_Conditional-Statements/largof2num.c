//program to find the greater number between two numbers
#include <stdio.h>
int main (){
    int a ,b;
    scanf("%d %d" , &a , &b); // Read two integers from the user
    if (a > b ){ // Check if a is greater than b
    printf("%d is greater than %d", a, b); // Print the greater number
    }
    else {
    printf("%d is greater than %d", b, a); // Print the greater number
    }
    return 0;
}