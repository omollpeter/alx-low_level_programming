#include "lists.h"

/**
 * free_listint_safe - Frees memory allocated to linked list
 * @h: Pointer to pointer to the first node of the linked
 *
 * Return: Number of nodes in the freed list, 0 otherwise
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *hptr, *loop, *node_to_free;

	if (*h == NULL)
		return (0);
	loop = check_loop(*h);
	if (loop)
	{
		temp = *h;
		while (1)
		{
			count++;
			node_to_free = temp;
			temp = temp->next;
			free(node_to_free);
			if (temp == loop)
			{
				hptr = loop;
				while (loop)
				{
					count++;
					node_to_free = loop;
					loop = loop->next;
					free(node_to_free);
					if (loop == hptr)
					{
						*h = NULL;
						return (count);
					}
				}
			}
		}
	}
	temp = *h;
	while (1)
	{
		count++;
		node_to_free = temp;
		temp = temp->next;
		free(node_to_free);
		if (!temp)
		{
			*h = NULL;
			return (count);
		}
	}
}
