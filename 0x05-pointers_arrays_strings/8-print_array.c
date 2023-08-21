#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array of integers
 * @n: the number of elements of array to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
	printf("\n");
	return;
	}

	for (i = 0; i < n - 1; i++)
	{
	printf("%d, ", a[i]);
	}

	printf("%d\n", a[n - 1]);
}
