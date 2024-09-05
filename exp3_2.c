//finding greatest of 3 numbers using ternary operator, if-else ladder and nested-if
//Experiment 3.2
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    //ternary operator
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Greatest using ternary operator is %d",max);
    //if-else ladder
    if(a>b&&a>c)
        max=a;
    else if(b>a&&b>c)
        max=b;
    else
        max=c;
    printf("\nGreatest using if-else ladder is %d",max);
    //nested-if
    if(a>b)
    {
        if(a>c)
            max=a;
        else
            max=c;
                
    }
    else if(b>c)
        max=b;
    else
        max=c;
        printf("\nGreatest using nested-if is %d",max);
    return 0;
}