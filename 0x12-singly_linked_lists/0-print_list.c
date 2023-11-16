#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the first element of the linked list
 *
 * Return: Number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	list_t *pcur = malloc(sizeof(list_t));
	size_t count = 0;
	unsigned int len;
	char *str;

	pcur = (list_t *)h;
	while (1)
	{
		str = pcur->str;
		len = (str) ? pcur->len : 0;
		printf("[%u] %s\n", len, (str) ? str : "(nil)");
		count++;
		pcur = pcur->next;
		if (pcur == NULL)
			break;
	}

	free(pcur);
	return (count);
}
