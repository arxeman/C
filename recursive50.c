//program to print 50 natural numbers using recursion
#include<stdio.h>
int recursion(int);
int recursion(int x)
{
    if(x==1)
    {
        printf("%d ",x);
        return 0;
    }
    else
    {
        printf("%d ",x); 
        return recursion(x-1);    
    }
}
int main()
{
    recursion(50);
    return 0;
}