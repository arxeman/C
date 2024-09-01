#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double disc,root1,root2;
    printf("Quadratic equation's general form is ax^2+bx+c \ngive the values of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("\nRoot 1 = %lf",root1);
        printf("\nRoot 2 = %lf",root2);
    }
    else if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("\nRoot 1 = Root 2 = %lf",root1);
    }
    else
    {
        double real=-b/(2*a);
        double imaginary=sqrt(-disc)/(2*a);
        printf("\nroot 1 = %lf + %lfi",real,imaginary);
        printf("\nroot 2 = %lf - %lfi",real,imaginary);
    }
    return 0;
}