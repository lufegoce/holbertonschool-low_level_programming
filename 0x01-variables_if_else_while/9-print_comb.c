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
for (c = 48; c <= 57; ++c)
{
putchar(c);
if ( c != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);

}
