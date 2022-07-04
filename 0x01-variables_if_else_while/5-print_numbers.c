#include <stdio.h>

/**
 * main - Entry point
 * Description - this program program prints all single number of
 * base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int letter = 0;

	while (letter < 10)
	{
		printf("%d", letter);
	 letter++;
	}
	printf("\n");
	return (0);
}
