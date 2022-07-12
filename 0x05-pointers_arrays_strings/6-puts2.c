#include "main.h"

/**
 * puts2 - print a string to stdout
 * @str: character string type
 * Description - only _putchar to be used
 */
void puts2(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		if ((g % 2) == 0)
		{
			_putchar(str[g]);
		}
	}
	_putchar('\n');
}
