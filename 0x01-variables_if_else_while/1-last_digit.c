#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - positive or negative
*Return: 0
*/
int main(void)
{
int n;
int c;
srand(time(0));
n = rand() - RAND_MAX / 2;
c = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, c);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, c);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
}
return (0);

}
