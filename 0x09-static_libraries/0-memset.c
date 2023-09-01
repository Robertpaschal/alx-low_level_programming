#include "main.h"
/**
 * *_memset - function fils the first n bytes of memory area
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes in s
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
