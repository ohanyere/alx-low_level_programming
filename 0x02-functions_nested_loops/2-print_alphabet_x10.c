#include <main.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times, in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letters;

	while (count <= 9 ; count++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}
