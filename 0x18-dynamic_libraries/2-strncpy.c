#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: the number of string to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (originalDest);

}
