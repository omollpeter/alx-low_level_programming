#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 * @head: Pointer to the first element in the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_to_free;

	if (!head)
	{
		return;
	}

	while (head)
	{
		node_to_free = head;
		head = head->next;
		free(node_to_free);
	}
}
