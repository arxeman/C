//program to find minimum and maximum element in an array using linear search
#include<stdio.h>
int main()
{
    int n,min,max,index1=0,index2=0;
    printf("Enter  the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);  //input of elements
    }
    min=max=arr[0];
    for(int i=1;i<n;i++)  //linear search
    {
        if(arr[i]<min)  //to find min element
        {
            min=arr[i];
            index1=i+1;
        }
        else if(arr[i]>max)  //to find max element
        {
            max=arr[i];
            index2=i+1;
        }
    }
    printf("Minimum element in the array is: %d\n",min);
    printf("Index of minimum element in the array is: %d\n",index1);
    printf("Maximum element in the array is: %d\n",max);
    printf("Index of maximum element in the array is: %d\n",index2);
    return 0;
}
