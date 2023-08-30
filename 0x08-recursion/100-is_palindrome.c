#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - creates a recursive condition
 * @s: string
 * @start: begining of string
 * @end: end of string
 * Return: 1 or 0
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
