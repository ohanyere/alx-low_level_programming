#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: character array string type
 * Description - _putchar onlt to be used
 */

void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar (str[g]);
	}
	_putchar('\n');
}
