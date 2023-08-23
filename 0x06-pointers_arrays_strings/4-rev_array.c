#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: first array of integer
 * @n: second array of integers
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
