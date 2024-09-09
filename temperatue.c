//program to convert temperature from one form to another
#include<stdio.h>
int main()
{
    char ch;
    printf("Choice to convert Temperature from one form to another:\n");
    printf("1 Celcius to Fahrenheit\n2 Fahrenheit to Celcius\n3 Celcius to Kelvin\n4 Kelvin to Celcius\n5 Kelvin to Fahrenheit\n6 Fahrenheit to Kelvin\n");
    printf("Enter choice: ");
    scanf("%c",&ch);  //choice input from user
    switch(ch)  //for calculation according to user's choice
    {
        case '1':  //celcius to fahrenheit
        {
            double cel,fah;
            printf("Enter temperature in Celcius: ");
            scanf("%lf",&cel);
            fah=(9*cel/5)+32;
            printf("Temperature in Fahrenheit = %lf",fah);
        }
        break;
        case '2':  //fahrenheit to celcius
        {
            double cel,fah;
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf",&fah);
            cel=(fah-32)/9*5;
            printf("Temperature in Celcius = %lf",cel);
        }
        break;
        case '3':  //celcius to kelvin
        {
            double cel,kel;
            printf("Enter temperature in Celcius: ");
            scanf("%lf",&cel);
            kel=cel+273.15;
            printf("Temperature in Kelvin = %lf",kel);
        }
        break;
        case '4':  //kelvin to celcius
        {
            double cel,kel;
            printf("Enter temperature in Kelvin: ");
            scanf("%lf",&kel);
            cel=kel-273.15;
            printf("Temperature in Celcius = %lf",cel);
        }
        break;  
        case '5':  //kelvin to fahrenheit
        {
            double kel,cel,fah;
            printf("Enter temperature in Kelvin: ");
            scanf("%lf",&kel);
            cel=kel-273.15;
            fah=(9*cel)/5+32;
            printf("Temperature in Fahrenheit = %lf",fah);
        }
        break;
        case '6':  //fahrenheit to kelvin
        {
            double kel,cel,fah;
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf",&fah);
            cel=(fah-32)/9*5;
            kel=cel+273.15;
            printf("Temperature in Kelvin = %lf",kel);
        }
        default:  //default output
            printf("Wrong Choice!"); 
    }
    return 0;
}
