#include<stdio.h>
int main()
{
    int n,i,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
    return 0;
}