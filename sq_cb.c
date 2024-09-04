//program to display the square and cube of first n natural numbers using do-while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;  //natural number starts at 1
    do
    {
        int sq=i*i,cb=i*i*i;  //sq is square and cb is cube
        printf("Square of %d is %d\tCube of %d is %d\n",i,sq,i,cb);
        i++;  //increasing counter by 1
    } while (i<=n);   
    return 0;
}