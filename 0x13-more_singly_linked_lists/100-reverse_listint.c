#include"lists.h"
/**
 *reverse_listint - print the rsverse
 *@head:double head
 *Return:head
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}

