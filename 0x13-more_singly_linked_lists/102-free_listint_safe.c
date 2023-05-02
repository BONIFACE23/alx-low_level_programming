#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: pointer to a pointer to the beginning of the list
 *
 * Return: the size of the list that was freed
 * If the function fails, exit the program with status 98
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		size++;
	}
	return (size);
}

