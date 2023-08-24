#include "main.h"

/**
 * rot13 -encodes a string using rot13.
 * @r: string to be encoded
 * Return: encoded string
 */

char *rot13(char *r)
{
	int i, j;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; r[j] != '\0'; j++)
		{
			if (r[i] == a[j])
			{
				r[i] = b[j];
				break;
			}
		}
	}
	return (r);
}
