#include "main.h"
#include <stdbool.h>
#include <limits.h>
/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: Always 0
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i++] == '-') ? -1 : 1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

	result = result * 10 + digit;
	i++;
	}

	return (result * sign);
}
