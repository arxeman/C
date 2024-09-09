//program to check whether a number is Prime/Armstrong/Perfect or not between a certain range
//Experiment 4.3b
#include<stdio.h>
#include<math.h>
int main()
{
    int start,end;
    printf("Enter start and end values: ");
    scanf("%d %d",&start,&end);  //input
    printf("Prime or armstrong or perfect numbers between %d and %d are:\n",start,end);
    for(int i=start;i<=end;i++)
    {
        if(isPrime(i))
            printf("%d is a PRIME number\n",i);
        if(isArmstrong(i))
            printf("%d is an ARMSTRONG number\n",i);
        if(isPerfect(i)==1)
            printf("%d is a PERFECT number\n",i);
    }
    return 0;
}
int isPrime(int num)  //a number only divisible by itself
{
    if(num<=1)
        return 0;
    for(int i=2;i<=num/2;i++)  //checking divisibility for prime
    {
        if(num%i==0)
            return 0;
    }
    return 1;  //returning 1 if num is prime
}
int isArmstrong(int num)  //a number whose digits raised to power of length is equal to itself
{
    int d=0,n=num,n2=num,sum=0; //number of digits
    while(n!=0)
    {
        d++;
        n/=10;
    }
    while(n2!=0)
    {
        int digit=n2%10,pow=1;
        for(int i=1;i<=d;i++)
            pow*=digit;
        sum+=pow;
        n2/=10;
    }
    if(sum==num)
        return 1;  //if number is armstrong
    return 0;  //if num is not armstrong
}
int isPerfect(int num)  //a number whose sum of factors is equal to the number
{
    int sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
        return 1;  //if perfect
    return 0;  //if not perfect
}
