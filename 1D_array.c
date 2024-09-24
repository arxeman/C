//program to find sum and average of n numbers entered in array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements  in array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  //accepting n terms
    }
    int sum=0;
    double avg;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];  //summation of elements
    }
    avg=sum/n;  //average of sum
    printf("Sum of elements in array is: %d\n",sum);
    printf("Average of sum of elements in  array is: %lf\n",avg);
    return 0;
}