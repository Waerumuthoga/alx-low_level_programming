#include "lists.h"
/**
 * print_dlistint - prints elements in a list
 * @h: struct list
 * Return: list len
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a;
	size_t len = 0;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
return (len);
}
