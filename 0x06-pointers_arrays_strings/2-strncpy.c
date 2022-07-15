#include "main.h"
/**
 * _strncpy - copies string
 *  @dest: destination string
 *  @src: source string
 *   @n: number of bytes to copy
 *
 *   Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	e = 0;

	while (src[e] != '\0' && e < n)
	{
		dest[e] = src[e];
		e++;
	}

	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
}
