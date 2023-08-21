#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: an array
 * @src: an array
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (originalDest);
}
