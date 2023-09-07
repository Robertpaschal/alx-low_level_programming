#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * multiply - multpilies 2 numbers
 * @num1: first number
 * @num2: second number
 * Return: result
 */
int multiply(char *num1, char *num2)
{
	int result;

	result = atoi(num1) * atoi(num2);
	return (result);
}
/**
 * is_valid_number - checks valid number
 * @num: number
 * Return: 1 (success)
 */
int is_valid_number(char *num)
{
	while (*num)
	{
		if (*num < '0' || *num > '9')
		{
			return (0);
		}
		num++;
	}

	return (1);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		errors();
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		errors();
	}

	result = multiply(argv[1], argv[2]);
	_putchar(result);

	return (0);
}
