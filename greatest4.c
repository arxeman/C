//program to find greatest of four given numbers
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max;
    if(a>b&&a>c&&a>d)
        max=a;
    else if(b>a&&b>c&&b>d)
        max=b;
    else if(c>a&&c>b&&c>d)
        max=c;
    else
        max=d;
    printf("Greatest number is = %d",max);
    return 0;
}