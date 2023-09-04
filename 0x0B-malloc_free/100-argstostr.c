#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	aout = malloc(sizeof(char) * l + 1);
	if (aout == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			aout[k] = av[i][j];
			k++;
		}
		if (aout[k] == '\0')
		{
			aout[k++] = '\n';
		}
	}
	return (aout);
}


