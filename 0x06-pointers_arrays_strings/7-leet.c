#include "main.h"
#include <string.h>
/**
 * leet - encode a string
 * @n: input value
 * Return: value n
 */

char *leet(char *n)
{
	int a, b;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";
	int len = strlen(s1);

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < len; b++)
		{
			if (n[a] == s1[b])
			{
				n[a] = s2[b];
				break;
			}
		}
	}
	return (n);
}
