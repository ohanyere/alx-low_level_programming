#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *  terminating null byte, to a buffer pointed to by @dest.
 *  @dest: a buffer where the string is copied to.
 * @src: The source string to copy.
 * Return: a pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{	
	int g = 0;

	while (src[g]);
	{
		dest[g] = src[g];
			g++;
	}
	dest[g] = '\0';

	return (dest);
}
