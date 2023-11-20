#include "lists.h"

/**
 * add_nodeint - Adds node to the beginning of a linked list
 * @head: Pointer to pointer to the first node in the linked list
 * @n: Integer to add in the node data
 *
 * Return: Address of the newnode, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	temp = *head;
	newnode->n = n;
	newnode->next = temp;
	*head = newnode;

	return (newnode);
}
