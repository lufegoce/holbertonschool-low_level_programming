#include "holberton.h"
/**
* print_square - check for print_square case.
* @size: check print square
*
* Return: void
*/

void print_square(int size)
{
	int line, colu;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (colu = 0; colu < size; colu++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
