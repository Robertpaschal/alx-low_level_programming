#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: substring
 * @accept: string
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *tmp = accept;

		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				count++;
				break;
			}
			tmp++;
		}

		if (*tmp == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}


