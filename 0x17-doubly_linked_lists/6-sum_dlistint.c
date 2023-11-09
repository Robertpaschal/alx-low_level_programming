#include "lists.h"
/**
 * sum_dlistint - sums all the data of a linked list
 * @head: first meber of the linked list
 * Return: the sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
