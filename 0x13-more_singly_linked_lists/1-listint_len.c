#include "lists.h"

/**
 * listint_len - Prints the number of nodes in the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp;

	if (!h)
		return (0);

	temp = (listint_t *) h;

	while (1)
	{
		count++;
		temp = temp->next;

		if (!temp)
			break;
	}

	return (count);
}
