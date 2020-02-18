#include "holberton.h"
/**
*swap_int - check for swap_int case
*@a: Pointer
*@b: Pointer
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
