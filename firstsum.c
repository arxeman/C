//program to print the sum of first 15 natural numbers using recusrion
#include<stdio.h>
int firstsum(int x);
int main()
{
    int x=15;
    printf("Sum of first fifteen natural numbers is: %d",firstsum(x));
    return 0;
}
int firstsum(int a)
{
    if(a==1)
        return 1;
    else 
        return (a+firstsum(a-1));
}