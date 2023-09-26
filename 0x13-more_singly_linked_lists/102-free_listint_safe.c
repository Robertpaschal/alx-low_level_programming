#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;

	if (*h == NULL)
	{
		return (0);
	}

	if ((*h)->next != NULL)
	{
		node_count += free_listint_safe(&((*h)->next));
	}

	free(*h);
	node_count++;

	*h = NULL;

	return (node_count);
}
