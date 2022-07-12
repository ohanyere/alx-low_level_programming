#include "main.h"

/**
 * puts_half - print a string to stdout
 * @str: character array string
 * Description: _putchar only to be used
 */

void puts_half(char *str)
{
	int g = 0;
	int leng = 0;
	int n;

	while (str[g++])
	{
		leng++;
	}

	if ((leng % 2) == 0)
	{
		n = leng / 2;
	}

	else
	{
		n = (leng + 1) / 2;
	}

	for (g = n; g < leng; g++)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
