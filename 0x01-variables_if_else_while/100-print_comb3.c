#include <stdio.h>
/**
*main - print base16
*Return: 0
*/
int main(void)
{
int c;
int j;
for (c = 48; c <= 57; c++)
{
	for (j = c+1; j <= 57; j++)
	{
		putchar(c);
		putchar(j);
		if (c == 56 && j == 57)
			break;
		putchar(44);
		putchar(32);
}
}
putchar('\n');
return (0);

}
