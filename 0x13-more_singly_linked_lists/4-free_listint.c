#include "lists.h"

/**
 * free_listint - Frees memmory allocated to linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
