#include "lists.h"
/**
 * list_len -length of list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int l;

	if (h == NULL)
	return (0);

	for (l = 1; h->next != NULL; l++)
		h = h->next;
	return (l);
}
