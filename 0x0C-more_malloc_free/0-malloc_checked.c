#include "main.h"
#include <stdio.h>
#include  <stdlib.h>
/**
 * malloc_checked - allocates memeory using malloc
 * @b: integer
 * Return: pointer (sucess), otherwise 98 (failure)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
