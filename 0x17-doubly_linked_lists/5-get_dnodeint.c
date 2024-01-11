#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list
 * @head: Pointer to the first node in the list
 * @index: Position of a node in the list
 *
 * Return: Pointer to the retrieved node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *node;
	unsigned int count, i = 0;

	if (!head)
		return (NULL);

	count = (unsigned int) dlistint_len((const dlistint_t *) head);

	if (index >= count)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	node = temp;
	return (node);
}

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
