#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializing it with special char
 * @size: an input
 * @c: where the string of char will be stored
 * Return: pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
