#include "holberton.h"
/**
* print_line - check for print_line case
* @n: number of lines to print
*
* Return: void
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{

		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
