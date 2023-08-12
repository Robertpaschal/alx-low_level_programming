#include <stdio.h>
#include <time.h>
/**
 * main - Entry poinnt
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d < '7'; d++)
	{

	for (p = d + 1; p <= '8'; p++)
	{

	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
	putchar(d + '0');
	putchar(p + '0');
	putchar(q + '0');
	if (d == 7 && p == 8 && q == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
