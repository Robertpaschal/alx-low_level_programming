#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: first memebr of the list
 * @index: postion where the node is to be deleted
 * Return: 1 if success, 0 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (index == 0)
		{
			temp = current;
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(temp);
			return (1);
		}

		current = current->next;
		index--;
	}
	
	return (-1);
}
