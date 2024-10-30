//program to print students details using dot operator
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    int age;
    float marks;
};
int main()
{
    struct student s1;
    s1.id=12515;
    strcpy(s1.name,"Aryeman");
    s1.age=18;
    s1.marks=75.5;
    printf("Student's ID = %d",s1.id);
    printf("\nStudent's Name = %s",s1.name);
    printf("\nStudent's Age = %d",s1.age);
    printf("\nStudent's Marks = %f",s1.marks);
    return 0;
}