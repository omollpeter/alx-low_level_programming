#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly linked list
 * @h: Pointer to the first node in the list
 *
 * Return: Returns number of nodes present in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count = 0;

	if (!h)
		return (0);

	temp = (dlistint_t *) h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
