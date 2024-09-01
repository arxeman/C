//program to find reverse of a number
#include<stdio.h>
int main()
{
    int n,reversed=0;
    printf("Enter a number: ");
    scanf("%d",&n);  //input of number
    while(n!=0)  //finding reverse
    {
        int digit=n%10;  //last digit
        reversed=reversed*10+digit;
        n/=10;
    }
    printf("Reversed number = %d",reversed);  //output
    return 0;
}