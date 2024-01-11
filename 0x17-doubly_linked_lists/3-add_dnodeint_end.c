#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a doubly linked list
 * @head: Pointer to pointer to the first node in the linked list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;
	return (new);
}
