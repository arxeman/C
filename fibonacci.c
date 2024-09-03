//program to find fibonacci series using recursive function
#include<stdio.h>
int fibo(int x)  //recursive function to find fibonacci of nth term
{
    if(x<2)
    {
        return x;  //base case f(0)=0,f(1)=1
    }
    else 
        return fibo(x-1)+fibo(x-2);
}
int main()
{
    int n;
    printf("Enter number of terms for fibonacci series: ");
    scanf("%d",&n);  //input
    for(int i=0;i<n;++i)
    {
        printf("%d ",fibo(i));
    }
    printf("\n");  //output
    return 0;
}
