#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at a given pos in doubly ll
 * @head: Pointer to pointer to the first node in the list
 * @index: Position of a node in the list
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *cur, *delete;
	unsigned int count, i = 0;

	if (!head)
		return (-1);

	if (*head == NULL)
		return (-1);

	count = (unsigned int) dlistint_len((const dlistint_t *) *head);
	if (index >= count)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (i < index)
	{
		prev = cur;
		cur = cur->next;
		i++;
	}

	delete = cur;
	cur = cur->next;
	prev->next = cur;
	cur->prev = prev;
	free(delete);
	return (1);
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
