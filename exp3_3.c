//program to check a number according to user's choice
#include<stdio.h>
#include<math.h>
int main()
{
    int n,ch;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Menu\n1. Check even or odd\n2. Check positive or negative\n3. Find Square\n4. Find square root");
    printf("\nEnter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:  //for odd or even check
        {
            (n%2==0)?printf("It is an even number"):printf("It is an odd number");
        }
        break;
        case 2:  //for positive or negative test
        {
            (n>0)?printf("Positive"):(n<0)?printf("Negative"):printf("Zero");
        }
        break;
        case 3:  //to find square
        {
            printf("Square = %d",n*n);
        }
        break;
        case 4:  //to find square root
        {
            printf("Square root = %lf",sqrt(n));
        }
        break;
        default:  //when wrong input is given
            printf("Wrong choice!");
    }
    return 0;
}
