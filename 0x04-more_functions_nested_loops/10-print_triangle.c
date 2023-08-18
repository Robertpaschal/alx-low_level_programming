#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 0; i < size - j; i++)
			{
				_putchar(' ');
			}
			for (i = 0; i < j; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
