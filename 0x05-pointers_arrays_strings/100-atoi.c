#include "main.h"
#include <stdbool.h>
#include <limits.h>
/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: The integer  value
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		num = num * 10 - (s[i] - '0');
		i++;
	}

	return (num * sign);
}
