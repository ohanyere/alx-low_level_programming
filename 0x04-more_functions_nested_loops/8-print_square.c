#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *@size:the size of a square
 */
void print_square(int size)
{
	int i;
	int u;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (u = 0; u < size; u++)
				_putchar('#');

			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
