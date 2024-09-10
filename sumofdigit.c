//program to find sum of digits of a five-digit number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    if(n>9999&&n<100000)
    {
        int sum=0,num=n;
        while(num!=0)
        {
            sum+=num%10;
            num/=10;
        }
        printf("Sum of digits of %d = %d",n,sum);
    }
    else
        printf("It is not a five-digit number");
    return 0;
}