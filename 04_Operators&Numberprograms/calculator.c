//Program to build a basic calculator using (+, -, *, /) operators
#include <stdio.h>
int main() {
float num1,num2;
printf("Enter two numbers: "); 
scanf("%f %f",&num1,&num2);
char operator; // Declare the operator variable
printf("Enter an operator (+, -, *, /): "); // Prompt the user to enter an operator
scanf(" %c", &operator);
if (operator == '+') { //check if the operator is addition
    printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2); 
} else if (operator == '-') { //check if the operator is subtraction
    printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
} else if (operator == '*') { //check if the operator is multiplication
    printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
} else if (operator == '/') { //check if the operator is division
    if (num2 != 0) { //check if the second number is not zero to avoid division by zero
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    } else {
        printf("Error! Division by zero is not allowed.");
    }
} else {
    printf("Error! Operator is not correct"); // Handle invalid operator input
}
return 0;
}