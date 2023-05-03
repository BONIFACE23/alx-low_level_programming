#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node of the list
 * @idx: index of the position where the new node
 * @n: integer value of the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	if (!head)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	/* special case for idx = 0 (insert at beginning) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* traverse the list until the node before idx */
	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node; i++)
		prev_node = prev_node->next;

	/* check if the traversal was successful */
	if (!prev_node)
	{
		free(new_node);
		return (NULL);
	}

	/* insert the new node after prev_node */
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}


