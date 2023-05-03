#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node = head, *loop_node = NULL;

	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;

		/* check if the next node is already in the list */
		if (node >= node->next && loop_node == NULL)
		{
			loop_node = node;
			/* go back to the beginning of the list */
			node = head;
			count = 0;
			/* find the node where the loop starts */
			while (node != loop_node)
			{
				node = node->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		node = node->next;
	}

	if (loop_node == NULL)
		return (count);
	exit(98);
}


