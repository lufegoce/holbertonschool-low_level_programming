#include "holberton.h"
/**
*jack_bauer - check for jack_bauer case
*Return: print the last digit of a number
*/
void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;
int aux = '9';
	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; h2 <= aux ; h2++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
				_putchar (h1);
				_putchar (h2);
				_putchar (':');
				_putchar (m1);
				_putchar (m2);
				_putchar ('\n');
				}

			}
			if (h1 == '2')
			{
			aux = '3';
			}
		}
	}
}
