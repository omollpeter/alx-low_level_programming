#include "lists.h"

/**
 * free_listint2 - Frees memory allocated to linked list and sets head to NULL
 * @head: Pointer to pointer to the first node in the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
