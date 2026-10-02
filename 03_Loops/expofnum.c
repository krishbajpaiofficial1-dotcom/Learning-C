//program to find exponential of a number without using pow() function 
#include<stdio.h>
int main()
{ 
    int base,exp;
    long long result = 1; //long long is used to store large values of exponential
    printf("enter the base number and exponent: ");
    scanf("%d%d",&base,&exp);
    for(int i=1;i<=exp;i++) //i should be less than or equal to exp because we need to multiply base exp times
    {
        result=result*base; //logic to find exponential of a number
    }
    printf("the result is: %lld",result);
    return 0;
}
