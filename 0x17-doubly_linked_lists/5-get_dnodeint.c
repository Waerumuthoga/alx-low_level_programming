#include "lists.h"

/**
 * get_dnodeint_at_index - get node by using its index
 * @head: list
 * @index: index of the element
 * Return: elemenent by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int e;

	for (e = 0; e < index && head->next; e++)
	{
		head = head->next;
	}
	if (e < index)
		return (NULL);
	return (head);
}
