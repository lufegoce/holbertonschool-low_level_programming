#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - print base16
*Return: 0
*/
int main(void)
{
char c;
char d;
for (c = 48; c <= 57; ++c)
putchar(c);
for (d = 'a'; d <= 'f'; ++d)
putchar(d);
putchar('\n');
return (0);

}
