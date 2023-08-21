#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: Always 0
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start = (length + 1) / 2;
	int i;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
