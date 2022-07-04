#include <stdio.h>

/**
 * main - Entry point
 * Description - This program print all single numbers of base1o
 * starting from 0
 * Return: 0
 */

int main(void)
{
	int letter = 0;

	while (letter < 10)
	{
		putchar(letter + '0');
		letter++;
	}
	putchar('\n');
	return (0);
}
