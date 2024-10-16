//program to count number of vowels in a string
#include<stdio.h>
#include<string.h>
int countV(char str[]);
int countV(char str[])
{
    int count=0;
    for(int i=0;i<strlen(str);i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {
            printf("%c ",str[i]);
            count++;
        }
    }
    return count;
}
int main()
{
    char string[100];
    printf("Enter a string: ");
    gets(string);
    printf("\nNumber of vowels in the string are: %d",countV(string));
    return 0;
}