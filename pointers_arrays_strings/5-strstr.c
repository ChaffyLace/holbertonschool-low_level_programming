#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
