#include <stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("Enter \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division\n");
    scanf("%c",&choice); //choice of user
    printf("Enter two numbers: ");  //input from user
    scanf("%d %d",&a,&b);
    if(choice == '1')
    {
        printf("Sum = %d",a+b);  //printing sum
    }
    else if(choice == '2')
    {
        
        printf("Difference = %d",a-b);  //printing difference
    }
    else if(choice == '3')
    {
        double prod;
        prod=a*b;
        printf("Product = %lf",prod);  //printing product
    }
    else if(choice == '4')
    {
        double div;
        div=a/b;
        printf("Quotient = %lf",div);  //printing quotient
    }
    else
    {
        printf("Wrong choice!");  //if number other than 4 is entered
    }
    return 0;
}
