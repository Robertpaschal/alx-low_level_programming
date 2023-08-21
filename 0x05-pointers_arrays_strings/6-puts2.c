#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first chaacter
 * folowed by a new line
 * @str: the string being printed
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
