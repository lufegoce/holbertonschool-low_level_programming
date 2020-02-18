#include "holberton.h"
/**
*print_rev - check for print_rev case
*@s: Pointer
*Return: str
*/
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
	_putchar('\n');
}
