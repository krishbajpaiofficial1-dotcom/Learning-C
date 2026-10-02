//program to print numbers from 1 to n
#include <stdio.h>
int main (){
    int n; //to store the upper limit
    int i =1; //to iterate from 1 to n
    scanf("%d" , &n); 
    while (i<=n){ //loop to print numbers from 1 to n
        printf("%d" , i); //print the current number
        i++; //increment the counter
    }
    return 0;
}