#include "main.h"
#include <string.h>
/**
 * leet - encode into 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";
	int len = strlen(s1);

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);

}
