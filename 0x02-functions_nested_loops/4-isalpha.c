#include "holberton.h"
/**
*_isalpha - check for isalpha case
*@c:caracter int
*Return: 1 if c is lower or uppercase 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
