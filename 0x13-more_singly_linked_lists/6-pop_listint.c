#include "lists.h"

/**
 * pop_listint - Deletes the first node in the linked list
 * @head: Pointer to pointer to the first node in the linked list
 *
 * Return: integer data that was present in deleted node, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
