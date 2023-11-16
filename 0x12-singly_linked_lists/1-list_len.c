#include "lists.h"

/**
 * list_len - Prints the number of elements in the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	list_t *pcur;
	size_t count = 0;

	pcur = malloc(sizeof(list_t));
	if (!pcur)
		return (0);

	pcur = (list_t *)h;
	while (1)
	{
		count++;
		pcur = pcur->next;

		if (pcur == NULL)
			break;
	}

	free(pcur);
	return (count);
}
