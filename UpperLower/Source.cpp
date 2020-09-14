#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char a;

char main()
{
	printf("Enter the alphabet : ");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("%c is lowercase alphabet.", a);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("%c is uppercase alphabet.", a);
	}
	else
	{
		printf("%c is not an alphabet.");
	}
}