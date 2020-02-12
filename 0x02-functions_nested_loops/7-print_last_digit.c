#include "holberton.h"
/**
*print_last_digit - check for print_last_digit case
*@n:caracter int
*Return: print the last digit of a number
*/
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar(number + '0');

	return (number);
}
