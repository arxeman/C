//program to find fibonacci series using recursive function
#include<stdio.h>
int fibo(int x)
{
    if(x<2)
    {
        return x;
    }
    else 
        return fibo(x-1)+fibo(x-2);
}
int main()
{
    int n;
    printf("Enter number of terms for fibonacci series: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("%d ",fibo(i));
    }
    printf("\n");
    return 0;
}