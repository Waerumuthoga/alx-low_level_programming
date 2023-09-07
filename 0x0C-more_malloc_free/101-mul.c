#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit -check to see if string contains a non-digit character.
 * @s: string to be evaluated.
 * Return: 0  for a non-digit and 1 for a digit.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen -returns the length of a string.
 * @s: string that is being evaluated.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handles the errors.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main -multiply two positive numbers
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, rem, dig1, dig2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
		if (argc != 3 || !is_digit(s1) || !is_digit(s2))
			errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
		if (!result)
			return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len] - '0';
		rem = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
		rem += result[len1 + len2 + 1] + (dig1 * dig2);
		result[len1 + len2 + 1] = rem % 10;
		rem /= 10;
		}
	if (rem > 0)
		result[len1 + len2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
		return (0);
}
