//program to find reverse of a number
#include<stdio.h>
void rev(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int n)
{
    int reverse=0;
    while(n!=0)
    {
        int remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("Reversed number is: %d",reverse);
}