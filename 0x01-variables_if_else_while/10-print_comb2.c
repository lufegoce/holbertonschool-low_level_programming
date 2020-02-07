#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - print base16
*Return: 0
*/
int main(void)
{
int c;
int j;
for (c = 48; c <= 57; ++c)
{
	for (j = 48; j <= 57; ++j)
	{
		putchar(c);
		putchar(j);
		if (c == 57 && j == 57)
		{
			break;
}
		putchar(44);
		putchar(32);
}
}
putchar('\n');
return (0);

}
