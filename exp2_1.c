//program to implement left shift and right shift operators
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter number of positions for the bits to shift to the left and right : ");
    scanf("%d", &b); // accepting the value of second operand from the user
    printf("Result of left shift operation is: ");
    printf("%d << %d = %d",a,b,a<<b);
    printf("\nResult of right shift operation is: ");
    printf("%d >> %d = %d",a,b,a>>b);
    return 0;
}