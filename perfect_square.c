//program to find whether the given number is perfect square or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,root1;
    double root2;
    printf("Enter a number: ");
    scanf("%d",&n);
    root1=sqrt(n);
    root2=sqrt(n);
    if((double)root1==root2)
        printf("%d is a perfect square",n);
    else
        printf("%d is not a perfect square",n);
    return 0;
}