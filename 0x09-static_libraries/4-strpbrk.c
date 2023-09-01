#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *tmp = accept;

		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}

	return (NULL);
}

