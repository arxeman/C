//program to perform various matrix operations Addition, Subtraction, Multiplication and Transpose using switch-case statement
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
    int choice;
    printf("Enter your choice:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Transpose\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    arr3[i][j]=arr1[i][j]+arr2[i][j];
                }
            }
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    printf("%d",arr3[i][j]);
                }
                printf("/n");
            }
        }
        break;
        case 2:
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    arr3[i][j]=arr1[i][j]-arr2[i][j];
                }
            }
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    printf("%d",arr3[i][j]);
                }
                printf("/n");
            }
        }
        break;
        case 3:
        {
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    arr3[i][j]=arr1[i][j]*arr2[i][j];
                }
            }
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    printf("%d",arr3[i][j]);
                }
                printf("/n");
            }
        }
        break;
        case 4:
        {
            if(row==col)
            {
                printf("Transpose of first array:\n");
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<col;j++)
                    {
                        printf("%d",arr1[j][i]);
                    }
                    printf("\n");
                }
                printf("Transpose of second array:\n");
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<col;j++)
                    {
                        printf("%d",arr2[j][i]);
                    }
                    printf("\n");
                }
            }
        }
        break;
        default: printf("Wrong choice!");
    }
    return 0;
}