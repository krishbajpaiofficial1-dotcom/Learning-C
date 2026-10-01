//program to assign values and print them
#include <stdio.h>
int main()
{
    int a = 10; //assigning value to variable a
    int b = 20; //assigning value to variable b
    int c = 30; //assigning value to variable c
    int volume; //declaring variable to store the sum

    volume = a*b*c; //calculating the sum of a, b, and c
    printf("The volume is: %d\n", volume); //printing the volume
    return 0; //returning 0 to indicate successful execution    
}