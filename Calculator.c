#include <stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division\n");
    scanf("%c",&choice);
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    //printf("%d",choice);
    if(choice == '1')
    {
        printf("Sum = %d",a+b);
    }
    else if(choice == '2')
    {
        
        printf("Difference = %d",a-b);
    }
    else if(choice == '3')
    {
        double prod;
        prod=a*b;
        printf("Product = %lf",prod);
    }
    else if(choice == '4')
    {
        double div;
        div=a/b;
        printf("Division = %lf",div);
    }
    else
    {
        printf("Wrong choice!");
    }
    return 0;
}