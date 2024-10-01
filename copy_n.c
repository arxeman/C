//program to copy first n characters from string
#include<stdio.h>
#include<string.h>
int main()
{
    char file1[]="Hello";
    char file2[20];
    strncpy(file2,file1,3);
    printf("%s",file2);
    return 0;
}