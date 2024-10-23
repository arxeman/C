//program to delete an element from array
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int i, pos, temp;
    printf("Enter the position of element to be deleted: ");
    scanf("%d", &pos);
    if(pos<1 || pos>n)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    printf("Element at position %d deleted successfully.\n",pos);
    printf("New array is: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}