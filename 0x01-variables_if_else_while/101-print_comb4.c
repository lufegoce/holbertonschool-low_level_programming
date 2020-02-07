#include <stdio.h>
/**
*main - print base16
*Return: 0
*/
int main(void)
{
int c;
int j;
int i;
for (c = '0'; c <= '7'; c++)
{
	for (j = c + 1; j <= '9'; j++)
	{
		for (i = j + 1; i <= '9'; i++)
		{
		putchar(c);
		putchar(j);
		putchar(i);
		if (c != '7' || j != '8' || i != '9')
		{
		putchar(44);
		putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
