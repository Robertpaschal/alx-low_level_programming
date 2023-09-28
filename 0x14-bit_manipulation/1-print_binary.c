#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 * Return: binary value
 */
void print_binary(unsigned long int n)
{
	int shift;
	int flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(n) * 8 - 1;
	flag = 0;

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit == 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || shift == 0)
		{
			_putchar('0');
		}

		shift--;
	}
}
