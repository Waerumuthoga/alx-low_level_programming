#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: destination of the string pointer
 * @src: source of the string pointer
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, i;
/* i is a counter for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
	length_of_string++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length_of_string++)
	{
	dest[length_of_string] = src[i];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
