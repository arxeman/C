//program to concatenate two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char file1[]="Hello";
    char file2[]="World";
    printf("%s\n",strcat(file1,file2));
    printf("%s",strncat(file1,file2,3));
    return 0;
}