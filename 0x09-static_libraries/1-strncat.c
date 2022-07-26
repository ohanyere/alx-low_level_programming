#include "main.h"

/**
 * * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, e;

	p = 0;
	e = 0;

	while (dest[p] != '\0')
		p++;

	while (src[e] != '\0' && e < n)
	{
		dest[p] = src[e];
		p++;
		e++;
	}

	dest[p] = '\0';

	return (dest);
}
