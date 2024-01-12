#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to pointer to the first node in the list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the newly added node, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	*head = new;
	(*head)->next = temp;
	temp->prev = *head;

	return (new);
}
