#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a spec. index in the linked list
 * @head: Pointer to the first node in the linked list
 * @index: Position of the node in the list
 *
 * Return: pointer to the retrieved node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int count, i = 0;

	if (head == NULL)
		return (NULL);

	count = (unsigned int) list_len(head);
	if (index > count)
	{
		return (NULL);
	}

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	node = temp;
	return (node);
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
