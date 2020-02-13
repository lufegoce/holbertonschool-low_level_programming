#include "holberton.h"
/**
*_isupper - check for _isupper case
*@c:caracter int
*Return: 0
*/
int _isupper(int c)
{
int result;

	if (c >= 'a' && c <= 'z')
	{
	result = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
	result = 1;
	}
	return (result);
}
