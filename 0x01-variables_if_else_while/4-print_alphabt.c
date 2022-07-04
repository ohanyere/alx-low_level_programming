#include <stdio.h>

/**
 * main - Entry point
 * description - This program prints alphabet in lowercase and then in
 * uppercase follwed by a new line with exeption of e and q
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters != 'a'; letters <= 'z'; low++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');
	return (0);
}
