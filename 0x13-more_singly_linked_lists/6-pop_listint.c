#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: Double pointer to the head node of the linked list.
 *
 * Return: The data of the head node that was deleted,
 *         or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}

