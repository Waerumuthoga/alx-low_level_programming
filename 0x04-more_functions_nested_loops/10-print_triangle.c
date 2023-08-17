#include "main.h"

/**
 * print_triangle -prints a triangle followed by a new line
 * @size: functional
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 0 ; j < size - i ; j++)
			{
				_putchar(' ');
			}

			for (j = 0 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

