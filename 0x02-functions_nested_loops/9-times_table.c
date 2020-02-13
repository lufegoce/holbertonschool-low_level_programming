#include "holberton.h"
/**
*times_table - check for times_table case
*Return: print the times_table
*/
void times_table(void)
{
	int f, c, mult;

	for (f = 0; f <= 9; f++)
	{
		_putchar ('0');
		for (c = 1; c <= 9; ++c)
		{
			mult = f * c;
			if (mult < 10)
			{
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
			_putchar (mult + '0');
			}
			else
			{
			_putchar (',');
			_putchar (' ');
			_putchar (mult / 10 + '0');
			_putchar (mult % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
