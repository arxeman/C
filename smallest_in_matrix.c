//program to find smallest element in an array with m*n elements
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and coloumns for a matrix: ");
    scanf("%d%d",&m,&n);
    int a[n][n],sum_row=0,sum_col=0;
    printf("Enter %d elements: ",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);  //traversing
        }
    }
    printf("The given array is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);  //printing
        }
        printf("\n");
    }
    int min=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                
            }
        }
    }
    printf("Smallest element is %d",min);
    return 0;
}