//program to swap two numbers without third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping:\nFirst number is %d second is %d",a,b);  //printing original
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nNumbers after swapping:\nFirst is %d second is %d",a,b);  //printing swapped
    return 0;
}