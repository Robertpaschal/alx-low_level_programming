#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - helper function
 * @c: character
 * Return: nothing
 */
int is_digit(char c)
{
	return ((c >= '0' && c <= '9'));
}
/**
 * str_to_int - helper function
 * @str: string
 * Return: nothing
 */
int str_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
		if (!is_digit(*str))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}

		result = result * 10 + (*str - '0');
		str++;
	}

	return (result);
}
/**
 * main - function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 98 (fail) otherwise, 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		return (98);
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	_putchar(num1 * num2);

	return (0);
}
