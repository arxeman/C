//program to print numbers between 1 to 20 and replace those divisible by 5 with 'Pass'
#include<stdio.h>
int main()
{
    for(int i=1;i<=20;i++)
    {
        if(i%5==0)
        {
            printf("Pass ");
        }
        else 
        {
            printf("%d ",i);
        }
    }
    return 0;
}