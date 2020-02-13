#include "holberton.h"
/**
*print_most_numbers - check for print_most_numbers case
*Return: 0
*/
void print_most_numbers(void)
{
int num;
num = 48;
        while (num <= 57)
        {
	       	if (num == 50 || num == 52)
       		{
                	num++;
        	}
		_putchar(num);
		num++;	
        }
        _putchar('\n');
}
