#include <stdio.h>

/**
 * 0-memset.c - a function that fills memory with a constant byte.
 *
 * Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n) 
	{
		s[i] = b;
		i++;
	}
	return s;
}
