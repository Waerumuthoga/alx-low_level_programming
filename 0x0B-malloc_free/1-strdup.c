#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *strdown;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdown = (char *)malloc(sizeof(char) * (i + 1));

	if (strdown == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		strdown[j] = str[j];
	}
	return (strdown);
}


