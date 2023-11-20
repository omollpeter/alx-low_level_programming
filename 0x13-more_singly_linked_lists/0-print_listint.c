#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the first node of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	temp = (listint_t *) h;
	while (1)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;

		if (!temp)
			break;
	}

	return (count);
}
