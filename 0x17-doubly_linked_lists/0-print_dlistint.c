#include "lists.h"
/**
 * print_dlistint - lists all element of a list
 * @h: the list conatining the elements
 * Return: the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
