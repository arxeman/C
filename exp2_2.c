//program to verify the difference between pre-increment and post-increment operator
#include<stdio.h>
int main()
{
    int a, b;
    // Post-increment
    printf("Enter a number: ");
    scanf("%d",&a);
    b=a;
    printf("Result of post increment is = %d ", b++);
    // Pre-increment
    b=a;
    printf("\nResult of pre increment is = %d ", ++b);
    return 0;
}