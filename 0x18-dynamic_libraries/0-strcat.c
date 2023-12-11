#include "main.h"

/**
 * _strcat -concatenates two strings
 * @dest: where the string pointer is going
 * @src: where the string pointer is coming from
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, i;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (i = 0; src[i] != '\0'; i++, length_of_string++)
	{
		dest[length_of_string] = src[i];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
