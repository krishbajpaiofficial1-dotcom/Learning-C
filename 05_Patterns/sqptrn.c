//program to make square pattern
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ //outer loop for rows
        for(j=1;j<=n;j++){ //inner loop for columns
            printf("*"); //print asterisk
        }
        printf("\n");
    }
    return 0;
}