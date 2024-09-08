//program to print the characters (alphabets, integers, special characters and symbols) against the ASCII numbers 32 to 126
//Experiment 4.2
#include<stdio.h>
int main()
{
    for(int i=32;i<=126;i++)
    {
        printf("ASCII %d : %c\n",i,(char)i);
    }
    return 0;
}