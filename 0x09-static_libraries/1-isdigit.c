#include "main.h"

/**
 * _isdigit - A function that ckecks for a digit (0 through9)
 * @c: character to be checked for
 * Return:1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
