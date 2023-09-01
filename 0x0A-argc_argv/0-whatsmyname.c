#include <stdio.h>

/**
 * main -print the name of the file followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: argument that contains the string vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
