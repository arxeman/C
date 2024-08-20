//a program to check prime numbers
#include<stdio.h>
int main()
{
    int n,i,count;
    count=0;  //setting counter to 0
    printf("Enter a number: ");
    scanf("%d",&n);  //input from user
    for(i=2;i<=n/2;i++)  //running loop from 2 to n/2 to check divisibilty by them
    {
        if(n%i==0)
        {
            count++;  //when n is diviible counter increases
        }
    }
    if(count!=0) //if count is not 0, then n is not prime
    {
        printf("not a prime");
    }
    else  //else it is prime
    {
        printf("prime");
    }
    return 0;
}
