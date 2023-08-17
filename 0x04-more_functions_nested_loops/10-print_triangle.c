#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: 0 (success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
