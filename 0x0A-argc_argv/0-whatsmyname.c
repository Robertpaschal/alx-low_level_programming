#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
