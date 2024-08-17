#include <stdio.h>

int main ()
{
   int x,y;
   printf("enter first number : ");
   scanf("%d",&x);

    printf("enter second number : ");
    scanf("%d",&y);

    if (y<x)
    {
        printf("%d is smallest number .",y);
    }
    else 
    {
        printf("%d is smallest number .",x);
    }
    return 0;
}