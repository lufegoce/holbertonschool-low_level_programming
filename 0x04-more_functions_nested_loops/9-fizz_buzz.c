#include "holberton.h"
#include <stdio.h>
#include <stdbool.h>
/**
* main - Fizz-Buzz test
*
* Return: 0
*/

int main(void)
{
	int cont;
	int flag;

	for (cont = 1; cont <= 100; cont++)
	{
		flag = 1;

		if (cont % 3 == 0)
		{
			flag = 0;
			printf("Fizz");
		}
		if (cont % 5 == 0)
		{
			flag = 0;
			printf("Buzz");
		}
		if (flag)
			printf("%d", cont);
		if (cont <= 99)
			printf(" ");
	}
	printf("\n");

	return (0);
}
