#include <stdio.h>
/**
 * main - finds and pritnts the largest prime factor of the number
 * Return: 0 (success)
 */

int main(void)
{
	long n = 612852475143;
	long l = 2;

	while (n > 1)
	{
		if (n % l == 0)
		{
			n /= l;
		}
		else
		{
		l++;
		}
	}

	printf("%ld\n", l);

	return (0);

}
