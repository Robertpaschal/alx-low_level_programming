#include "main.h"
/**
 * print_diagonal - draws a dagonal line on the terminal
 * @n: the number of times the character will be prited
 * Return: 0 (success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
