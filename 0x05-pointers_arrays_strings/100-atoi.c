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
	long result = 0;
	long sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}

		s++;
	}

	return (result * sign);
}
