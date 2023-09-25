#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given poisiton
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *current;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; current != NULL &&  i < idx - 1; i++)
	{

		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
