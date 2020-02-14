#include "holberton.h"
/**
* print_diagonal - check for print_diagonal case.
* @n: check number of / to print
*
* Return: void
*/

void print_diagonal(int n)
{
	int line, colu, cont;

	cont = 0;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (colu = 0; colu < cont; colu++)
			{
				_putchar(' ');

			}
			_putchar(92);
			_putchar('\n');
			cont++;
		}
	}
	else
	_putchar('\n');
}
