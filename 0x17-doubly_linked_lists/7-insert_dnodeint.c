#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given postion
 * @h: node at the given index
 * @idx: index where the node is located
 * @n: the data to be added
 * Return; address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}

		current = current->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
