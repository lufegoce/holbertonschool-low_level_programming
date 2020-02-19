#include "holberton.h"
/**
*rev_string - check for rev_string case
*@s: Pointer
*Return: 0
*/
void rev_string(char *s)
{
	int i;
	int j;
	int ini = 0;
	char nem;
	char temp;

	while (s[i] != '\0')
	{
	i++;
	}
		for (j = i - 1; j >= ini; j--)
		{
			temp = s[j];
			nem = s[ini];
			s[j] = nem;
			s[ini] = temp;
			ini++;
		}
}
