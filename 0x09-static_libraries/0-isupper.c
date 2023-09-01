#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character being tested gor uppercase value
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
