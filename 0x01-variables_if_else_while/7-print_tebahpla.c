#include <stdio.h>

/**
 * main - Entry point
 * Description - This prom print lowercase of the alphabet in reverse
 * follwed by a new line
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}


