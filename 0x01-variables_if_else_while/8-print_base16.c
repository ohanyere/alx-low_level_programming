#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints all numbers of base 16
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char p;

	while (i < 0)
	{
		putchar(i + '0');
		i++;
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
