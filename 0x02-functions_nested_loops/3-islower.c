#include "holberton.h"
/**
*_islower - check for lower case
*@c:caracter int
*Return: 1 if c is lower or 0 other wise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
