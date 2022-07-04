#include <stdio.h>

/**
 * main - Entry
 * Description - This program prints all possible combination
 * of single-digit followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
