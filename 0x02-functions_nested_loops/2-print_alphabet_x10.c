#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j = 0, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
