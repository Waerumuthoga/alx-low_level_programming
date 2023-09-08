#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits.
 * @s: String to be evaluated.
 * Return: 1 for digits, 0 otherwise.
 */
int is_digit(char *s)
{
	while (*s)
	{
	if (*s < '0' || *s > '9')
	{
		return (0);
	}
	s++;
	}
	return (1);
}

/**
 * main - Multiply two positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	long num1;
	long num2;
	long result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	result = num1 * num2;

	printf("%ld\n", result);

	return (0);
}
