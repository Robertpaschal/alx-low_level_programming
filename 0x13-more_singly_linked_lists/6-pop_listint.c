#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 * Return: head node's data, otherwise 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
