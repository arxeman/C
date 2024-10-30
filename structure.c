//program to print students details using pointer operator
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
    struct student s1={12515,"Aryeman",18,75.5};
    struct student *ptr=&s1;
    printf("Student's ID = %d",ptr->id);
    printf("\nStudent's Name = %s",ptr->name);
    printf("\nStudent's Age = %d",ptr->age);
    printf("\nStudent's Marks = %f",ptr->marks);
    return 0;
}