#include"lists.h"
/**
 * find_listint_loop - loops in linked list
 * @head:pointer header
 * Return:null or ptr 1
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			listint_t *ptr1 = head;
			listint_t *ptr2 = slow;

			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			return (ptr1);
		}
	}

	return (NULL);
}

