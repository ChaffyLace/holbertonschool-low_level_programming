#include "main.h"

/**
 * _memcpy() - checks for uppercase character
 * @c: the character to check
 *
 * Return: dest if c is uppercase, 0 otherwis
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *k = dest;
	const unsigned char *p = src;

	for(i = 0; i < n; i++);
	k[i] = p[i];
Â
	return (dest);
}

