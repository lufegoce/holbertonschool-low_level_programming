#include "holberton.h"
/**
*_isdigit - check for _isdigit case
*@c:caracter int
*Return: 0
*/
int _isdigit(int c)
{
int result;

	if (c >= '0' && c <= '9')
	{
	result = 1;
	}
	else
	{
	result = 0;
	}
	return (result);
}
