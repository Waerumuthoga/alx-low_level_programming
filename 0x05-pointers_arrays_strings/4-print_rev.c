#include "main.h"

/**
 * print_rev -prints a string in reverse followed by a new line
 * @s: functional parameter
 * Return: reverse string and a new line
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
