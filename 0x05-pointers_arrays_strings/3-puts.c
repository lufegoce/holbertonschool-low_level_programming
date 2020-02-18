#include "holberton.h"
/**
*_puts - check for _puts case
*@str: Pointer
*Return: str
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
