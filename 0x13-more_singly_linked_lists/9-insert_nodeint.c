#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at specific position in the list
 * @head: Pointer to pointer of the first node of the linked list
 * @idx: Position to insert the node in the linked list
 * @n: Integer data to add to the newnode
 *
 * Return: Pointer to the inserted node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count, i = 0;

	count = (unsigned int) list_len(*head);
	if (idx > count)
		return (NULL);

	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

/**
 * list_len - Computes the length of the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of nodes in the linked list, 0 otherwise
 */
size_t list_len(const listint_t *h)
{
	listint_t *pcur;
	size_t count = 0;

	if (h == NULL)
		return (0);

	pcur = (listint_t *)h;
	while (1)
	{
		count++;
		pcur = pcur->next;

		if (pcur == NULL)
			break;
	}

	return (count);
}
