#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head of the list
 * @idx: The index where the new node should be added
 * @n: The value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (!head)
		return (NULL);

	/* Special case for index 0 */
	if (idx == 0)
		return (add_nodeint(head, n));

	/* Traverse the list to find the node at index idx - 1 */
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node; i++)
		current_node = current_node->next;

	/* Check if the index is out of bounds */
	if (i != idx - 1 || !current_node)
		return (NULL);

	/* Create the new node and insert it */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

