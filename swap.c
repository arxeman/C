//program to swap two numbers given by users
#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    temp=n1;  //temporary 
    n1=n2;  //swapping
    n2=temp;
    printf("1st number is %d and second number is %d",n1,n2);
}