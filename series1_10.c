//program to print 1 to 10 using while and for loop
#include<stdio.h>
int main()
{
    int i=1;
    printf("Series using while loop: ");
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
    printf("\nSeries using for loop: ");
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\nSeries using do-while loop: ");
    i=1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<=10);
    return 0;
}