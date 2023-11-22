#include "lists.h"

/**
 * print_listint_safe - Prints all the nodes in the list with their addresses
 * @head: Pointer to the first node of the linked list whose nodes are printed
 *
 * Return: Number of nodes in the list, exit with 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp, *hptr, *loop;

	if (head == NULL)
		exit(98);
	loop = check_loop(head);
	if (loop)
	{
		temp = head;
		while (1)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp = temp->next;
			if (temp == loop)
			{
				hptr = loop;
				while (loop)
				{
					printf("[%p] %d\n", (void *)loop, loop->n);
					count++;
					loop = loop->next;
					if (loop == hptr)
					{
						printf("-> [%p] %d\n", (void *)loop, loop->n);
						return (count);
					}
				}
			}
		}
	}
	temp = head;
	while (1)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		if (!temp)
			return (count);
	}
}

/**
 * check_loop - Finds a loop in a linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: Pointer to the node starting the loop, NULL othewise
 */
listint_t *check_loop(const listint_t *head)
{
	const listint_t *ptr1, *ptr2, *slow, *fast;
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
					return ((listint_t *)ptr1);
			}
		}
	}
	return (NULL);
}
