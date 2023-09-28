#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endain
 */
int get_endianness(void)
{
	union EndiannessTest test;

	test.value = 1;

	if (test.bytes[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
