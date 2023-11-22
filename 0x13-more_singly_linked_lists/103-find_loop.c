#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: Pointer to the node starting the loop, NULL othewise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2, *slow, *fast;
	int len = 0;

	if (head == NULL)
		return (NULL);
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			ptr1 = slow;
			ptr2 = slow;

			while (1)
			{
				len++;
				ptr1 = ptr1->next;
				if (ptr1 == ptr2)
					break;
			}
			ptr1 = head;
			ptr2 = head;
			while (len > 0)
			{
				ptr2 = ptr2->next;
				len--;
			}
			while (1)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
				if (ptr1 == ptr2)
					return (ptr1);
			}
		}
	}
	return (NULL);
}
