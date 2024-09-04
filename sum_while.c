//Write a C program to calculate the sum of numbers from m to n using while loop
#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("Enter starting and end value: ");
    scanf("%d %d",&n,&m);
    int i=n;
    if(n<m)
    {
        while(i<=m)
        {
            sum+=i;
            i++;
        }
        printf("Sum = %d",sum);
    }
    else
        printf("Starting value cannot be less than end value!");
}   