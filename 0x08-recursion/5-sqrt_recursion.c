#include <stdio.h>
#include "main.h"
/**
 * _sqrt_helper - helps the main function
 * @n: number
 * @i: sqaure of number
 * Return: i
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i *  i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion - return the natrual squareroot of a number
 * @n: number
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}

