#include "holberton.h"
/**
*print_sign - check for print_sign case
*@n:caracter int
*Return: 1 prints + if n is greater than zero
*0 and prints 0 if n is zero or -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
