//program to copy string from one variable to another
#include<stdio.h>
#include<string.h>
int main()
{
    char file1[]="Hello";
    char file2[20];
    strcpy(file2,file1);
    printf("%s",file2);
    return 0;
}