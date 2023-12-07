#include "lists.h"

/**
 * sum_dlistint - sum of elements in a list
 * @head: list in question
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
