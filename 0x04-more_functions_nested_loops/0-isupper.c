#include "holberton.h"
/**
*_isupper - check for _isupper case
*@c:caracter int
*Return: 0
*/
int _isupper(int c)
{
int result;
	if (c >= 'A' && c <= 'Z')
	{
	result = 1;
	}
	else
	{
	result = 0;
	}
	return (result);
}
