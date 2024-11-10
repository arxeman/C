//program to find second smallest and second largest element in an array
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    int secondmin=INT_MAX,secondmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            secondmin=min;
            min=arr[i];
        }
        else if(arr[i]<secondmin&&arr[i]!=min)
        {
            secondmin=arr[i];
        }
        if(arr[i]>max)
        {
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax&&arr[i]!=max)
        {
            secondmax=arr[i];
        }
    }
    printf("Second smallest element is: %d\n",secondmin);
    printf("Second largest element is: %d",secondmax);
    return 0;
}