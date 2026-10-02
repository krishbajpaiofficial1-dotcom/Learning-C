//program to swap two numbers
#include<stdio.h>
int main()
{ 
    int a,b,temp; //declare variables
    printf("enter two numbers:");
    scanf("%d%d",&a,&b); //giving input to the variables
    temp=a; // giving value of a to temp
    a=b; // giving value of b to a
    b=temp; // giving value of temp to b
    printf("after swapping a=%d b=%d",a,b); //it will print the swapped values of a and b
    return 0;   
}