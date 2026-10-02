//program to find the area of circle
#include <stdio.h>  
int main(){
    float r,a; //r=radius, a=area
    printf("Enter the radius of circle: "); //taking input from user
    scanf("%f",&r); //reading the radius
    a=3.14*r*r; //formula to calculate area of circle
    printf("Area of circle is: %f",a);  //printing the area of circle
    return 0;
}