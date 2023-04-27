
#include<stdio.h>
#include"lists.h"
/**
 *list_len - function that return list_s
 *@h:pointer to list_t list
 *Return:number of element in h
 **/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

