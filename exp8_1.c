//program to print 1D array in reverse order
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Reversed array is: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
