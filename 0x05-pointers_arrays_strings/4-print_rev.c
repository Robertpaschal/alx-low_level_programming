#include "main.h"
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: string being printed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
