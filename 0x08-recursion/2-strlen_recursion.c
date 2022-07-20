#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string params
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
