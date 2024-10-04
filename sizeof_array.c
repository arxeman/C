//program to find total number of elements in an array
#include<stdio.h>
int main()
{
    int arr[]={2,5,2,6,3,4,8,9,1};
    int  size = sizeof(arr)/sizeof(arr[0]);  //to calculate number of elements in array
    printf("Size of array is %d",size);
    return 0;
}