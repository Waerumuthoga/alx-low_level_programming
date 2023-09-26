#ifndef LISTS_H_
#define LISTS_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_t -self referencial struct for creating nodes for singly list
 * @m: integer data
 * @next: self referncial pointer to next node
 */
typedef struct listint_u
{
	int n;
	struct listint_u *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif