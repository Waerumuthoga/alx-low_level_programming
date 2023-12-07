#include "lists.h"

/**
 * dlistint_len - returns list len
 * @h: struct list
 * Return: list len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int a = 0;

	for (a = 0; h; a++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
