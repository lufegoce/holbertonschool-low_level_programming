#include "holberton.h"
/**
*_abs - check for abs case
*@a:caracter int
*Return: prints if a is + if a is - print a +
*/
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}

}
