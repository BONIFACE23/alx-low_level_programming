#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Pointer to the head node of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}



