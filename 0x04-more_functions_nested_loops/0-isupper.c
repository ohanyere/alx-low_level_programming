#include "main.h"

/**
 * _isuper - checks for upprercase letters
 * @c: character to be checked
 *
 * Return: 1 if true 0 otherwise
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
