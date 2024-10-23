//program to illustrate various string inbuilt functions (strcmp, strlen, strcpy, strcat)
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10]="DEF";
    strcpy(str1,"ABC");
    printf("String 1 is: %s",str1);
    printf("\nString 2 is: %s",str2);
    strcat(str1,str2);
    printf("\nString 1 after concatenation is: %s",str1);
    int len=strlen(str1);
    printf("\nLength of string 1 is = %d",len);
    if(strcmp(str1,str2)==0)
    {
        printf("\nString 1 is equal to String 2");
    }
    else
    {
        printf("\nString 1 is not equal to String 2");
    }
    return 0;
}