//program to find sum of all prime numbers from 1 to n
#include<stdio.h>
int isPrime(int n);
int main()
{
    int n,sum=0;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("Prime numbers between 1 and %d: ",n);
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nSum of prime numbers between 1 to %d = %d",n,sum);
}
int isPrime(int num)  //a number only divisible by itself
{
    //example : 5 is only divisible by 1 and 5
    if(num<=1)
        return 0;
    for(int i=2;i<=num/2;i++)  //checking divisibility for prime
    {
        if(num%i==0)
            return 0;
    }
    return 1;  //returning 1 if num is prime
}