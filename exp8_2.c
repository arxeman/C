//program that is returning pointer to the larger value out of two passed values
#include<stdio.h>
int* print(int*,int*);
int* print(int *aptr, int *bptr)
{
    int *large;
    large= *aptr>*bptr ? aptr : bptr;
    return large;
}
int main()
{
    int x,y,*result;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    result = print(&x,&y);
    printf("Larger number is : %d",*result);
    return 0;
}