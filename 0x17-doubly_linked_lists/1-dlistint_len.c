#include "lists.h"

/**
 * dlistint_len - Computes the number of nodes in a doubly linked list
 * @h: Pointer to the first node in the list
 *
 * Return: Number of nodes, 0 if empty
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count = 0;

	if (!h)
		return (0);

	temp = (dlistint_t *) h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
