//program to create a pattern diamond using stars
#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)  //for upper part of diamond
    {
        for(int j=i;j<n;j++)  
        {
            printf(" "); //prints spaces
        }
        for(int j=1;j<=(2*i-1);j++)  //(2*i-1) prints odd no. of stars in each line
        {
            printf("*");  //prints stars
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)  //for lower part of diamond
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");  //spaces
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");  //stars
        }
        printf("\n");
    }
    return 0;
}