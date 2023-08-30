#include "main.h"
#include <stdio.h>
/**
 * is_divisible - defines the divisor
 * @n: integer
 * @i: divisor
 * Return: 0 or 1
 */

int is_divisible(int n, int i)
{
	if (i <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - returns a value if input is prime number
 * @n: input integer
 * Return: 1;
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (0);
	}
	return (!is_divisible(n, 3));
}
