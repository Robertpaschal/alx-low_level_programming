#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	size_t total_len;
	char *s;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2;

	s = malloc(total_len + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}

