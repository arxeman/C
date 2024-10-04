//program to print first 15 natural numbers using recursion
#include<stdio.h>
void firstprint(int x);
int main()
{
    int x=15;
    printf("First fifteen natural numbers is: ");
    firstprint(x);
    return 0;
}
void firstprint(int a)
{
    printf("%d ",a);
    if(a==1)
        return;
    return firstprint(a-1);
}
