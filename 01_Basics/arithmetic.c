//program to perform basic arithmetic operations
#include<stdio.h>
int main(){
    int a,b; //declare variables
    printf("enter two numbers:"); 
    scanf("%d%d",&a,&b); //giving input to the variables
    printf("addition of a and b=%d\n",a+b); //it will print the addition of a and b
    printf("subtraction of a and b=%d\n",a-b); //it will print the subtraction of a and b
    printf("multiplication of a and b=%d\n",a*b); //it will print the multiplication of a and b
    printf("division of a and b=%d\n",a/b); //it will print the division of a and b
    return 0;
}