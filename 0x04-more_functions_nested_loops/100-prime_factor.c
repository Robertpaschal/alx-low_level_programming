#include <stdio.h>
/**
 * main - finds and pritnts the largest prime factor of the number
 * Return: 0 (success)
 */

int main(void)
{
	long long n = 612852475143;
	long long l = 2;

	while (n > 1)
	{
		if (n % l == 0)
			n /= l;
	}
	else
	{
		l++
	}

	printf("%lld\n", l);

	return (0);

}
