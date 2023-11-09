#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: the first memeber of the node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	head = NULL;
}
