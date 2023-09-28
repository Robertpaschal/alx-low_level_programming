#include <stdio.h>
#include "main.h"
/**
 * clear_bit - stes the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: 1 if worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
