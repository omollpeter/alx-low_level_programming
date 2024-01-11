#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a d_ll
 * @h: Pointer to pointer to the first node in the list
 * @idx: Position in the linked list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the newly created node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *cur, *new;
	unsigned int count, i = 0;

	if (!h)
		return (NULL);

	count = (unsigned int) dlistint_len((const dlistint_t *) *h);

	if (idx >= count)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		add_dnodeint(h, n);
	if (idx == count - 1)
		add_dnodeint_end(h, n);
	cur = *h;
	while (i < idx)
	{
		prev = cur;
		cur = cur->next;
		i++;
	}

	prev->next = new;
	new->next = cur;

	return (new);
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
