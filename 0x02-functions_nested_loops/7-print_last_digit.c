#include "holberton.h"
/**
*print_last_digit - check for print_last_digit case
*@n:caracter int
*Return: print the last digit of a number
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = (n * -1);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
