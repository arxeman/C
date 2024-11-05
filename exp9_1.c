//Define a structure type, personal, that would contain person name, date of joining and salary. Using this structure, write a program to read this information for one person from the key board and print the same on the screen.
#include <stdio.h>
struct personal
{
    char name[20];
    int dd;
    char month[10];
    int year;
    float sal;
};
int main() {
    struct personal P;
    printf("Enter name: ");
    scanf("%s",P.name);  //only first name
    printf("Enter date: ");
    scanf("%d",&P.dd);
    printf("Enter month: ");
    scanf("%s",&P.month);
    printf("Enter year: ");
    scanf("%d",&P.year);
    printf("Enter salary: ");
    scanf("%f",&P.sal);
    printf("\nName: %s",P.name);
    printf("\nDate: %d/%s/%d",P.dd,P.month,P.year);
    printf("\nSalary: %f",P.sal);
    return 0;
}
