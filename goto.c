//this program uses gotooperation to print menu
#include <stdio.h>
#include<math.h>
int main()
{
    int n,ch;
    menu:
    {
        printf("\nEnter a number: ");
        scanf("%d",&n);
        printf("Menu\n1. Even or odd\n2. positive or negative\n3. Square\n4. Square root\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
    }
    switch(ch)
    {
        case 1:
        {
            if(n%2==0)
                printf("Even");
            else
                printf("Odd");
            goto menu;
        }
        break;
        case 2:
        {
            if(n>0)
                printf("Positive");
            else if(n<0)
                printf("Negative");
            else
                printf("Zero");
            goto menu;
        }
        break;
        case 3:
        {
            printf("%d",n*n);
            goto menu;
        }
        break;
        case 4:
        {
            double rt=sqrt(n);
            printf("%lf",rt);
            goto menu;
        }
        break;
        default:
            printf("Wrong choice!");
    }
    return 0;
}
