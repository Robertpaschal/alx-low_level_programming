#include "main.h"
#include <stddef.h>
/**
 * *_strstr - finds the first occurrence of the substring
 * @haystack: string
 * @needle: string
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *ned = needle;

		while (*ned != '\0' && *hay == *ned)
		{
			hay++;
			ned++;
		}

		if (*ned == '\0')
		{
			return (haystack);
		}

		haystack++;
	}


	return (NULL);
}
