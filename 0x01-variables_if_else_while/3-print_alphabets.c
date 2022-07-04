#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints alphabets in lowercase and
 * in uppercase follwed by a new line
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
