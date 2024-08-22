//to find the nth root of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int num,n;
    double res;
    printf("Enter a number and value of n: ");
    scanf("%d %d",&num,&n);
    res=pow(num, 1.0/n);
    printf("%dth root of %d = %lf",n,num,res);
    return 0;
}
