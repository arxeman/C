//program to find whether the entered number is palidrom or not
#include<stdio.h>
void palin(int);
void palin(int n)
{
    int x=0;
    int num=n;
    while(num!=0)
    {
        int rem=num%10;
        x=x*10+rem;
        num=num/10;
    }
    if(x==n)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palin(n);
    return 0;
}