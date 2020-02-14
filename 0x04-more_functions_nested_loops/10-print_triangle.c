#include "holberton.h"
/**
* print_triangle -  check for print_triangle case
* @size: size of the square to print
*
* Return: void
*/

void print_triangle(int size)
{
	int line, fine;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (fine = line + 1; fine < size; fine++)
			{
				_putchar(' ');

			}
			for (fine = 0; fine < line + 1; fine++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
