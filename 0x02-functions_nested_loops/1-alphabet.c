#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase followed by new line
 * Return: void
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
