//program to replace all zeroes to ones in a binary number
#include<stdio.h>
#include<string.h>
int main()
{
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s",&binary);
    int len=strlen(binary);
    for(int i=0;i<len;i++)
    {
        if(binary[i]=='0')
        {
            binary[i]='1';
        }
    }
    printf("Result = %s",binary);
    return 0;
}