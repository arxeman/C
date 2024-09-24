//program to accept n*n terms in an array and find the sum of elements row  wise and coloumn wise in 2D array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows and coloumns for a square matrix: ");
    scanf("%d",&n);
    int a[n][n],sum_row=0,sum_col=0;
    printf("Enter %d elements: ",n*n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The given array is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        sum_row=0;
        for(int j=0;j<n;j++)
        {
            sum_row+=a[i][j];  //sum of rows
        }
        printf("Sum of elements in row %d = %d\n",i+1,sum_row);
    }
    for(int i=0;i<n;i++)
    {
        sum_col=0;
        for(int j=0;j<n;j++)
        {
            sum_col+=a[j][i];  //sum of coloumns
        }
        printf("Sum of elements in coloumn %d = %d\n",i+1,sum_col);
    }
    return 0;
}
