#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: character string type
 */

void print_rev(char *s)
{
	int g;

	for (g = 0; s[g] != '\0'; g++)
	{
	}

	for (g--; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
