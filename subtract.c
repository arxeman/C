#include<stdio.h>

int main()
{
	int a,b,sub;

	//Read value of a and b
	printf("Enter the two nos.: ");
	scanf("%d %d",&a,&b);

	//formula of subtraction
	sub= a-b;
	printf("%d - %d = %d\n",a,b, sub);

	return 0;
}
