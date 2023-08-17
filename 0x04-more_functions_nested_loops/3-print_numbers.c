#include "main.h"

/**
 * print_numbers - prints numbers from 9 to 9 followed by a new line
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
