//program to find sum and average of odd integers between 1 to 300 which are divisible by 7
//Experiment 4.1
#include<stdio.h>
int main()
{
    int sum=0,c=0;
    double avg;
    printf("Odd numbers between 1 and 300 divisible by 7:\n");
    for(int i=1;i<=300;i+=2)
    {
        if(i%7==0)
        {
            printf("%d ",i);
            sum+=i;
            c++;
        }
    }
    avg=sum/c;
    printf("\nSum = %d\nAverage = %lf",sum,avg);
    return 0;
}