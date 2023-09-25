#include <stdio.h>
#include "lists.h"
/**
 * sum_listsint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sun_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
