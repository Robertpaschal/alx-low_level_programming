#include "main.h"
/**
 * _puts - prints a string follwed by a new line
 * @str: the string being printed
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
