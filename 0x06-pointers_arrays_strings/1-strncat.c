#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destEnd = dest;

	while (*destEnd != '\0')
	{
		destEnd++;
	}

	while (*src != '\0' && n > 0)
	{
		*destEnd = *src;
		destEnd++;
		src++;
		n--;
	}

	*destEnd = '\0';

	return (dest);
}
