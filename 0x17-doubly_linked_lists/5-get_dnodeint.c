#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at specified index
 * @head: first memebr of the node
 * @index: node at a specified index
 * Return: the node at the index otherwise, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
