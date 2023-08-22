#include <stdio.h>

/**
 * main -generates valid passwords for the program 101 crackme
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int c;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar (c);
	}
	putchar (2772 - sum);

	return (0);
}
