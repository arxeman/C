//program to accept two arrays and print their product in 3rd
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows and coloumns: ");
    scanf("%d%d",&row,&col);
    int arr1[row][col],arr2[row][col],arr3[row][col];
    printf("Enter %d elements for 1st array: ",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter %d elements for 2nd array: ",row*col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("1st array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("2nd array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    printf("3rd array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}