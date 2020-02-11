#include "holberton.h"
/**
*print_alphabet_x10 - function print alphabet x10
*Return: void
*/
void print_alphabet_x10(void)
{
	char c;
	int cont;

	cont = 0;
	while (cont < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		cont++;
		_putchar('\n');
	}
}
