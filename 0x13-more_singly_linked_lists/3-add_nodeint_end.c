#include "lists.h"

/**
 * add_nodeint_end - Adds node to the end of the linked list
 * @head: Pointer to pointer to the first node in the linked list
 * @n: Integer to add in the node data
 *
 * Return: Pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
