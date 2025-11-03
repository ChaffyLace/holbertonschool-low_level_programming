#include "main.h"
#include <stdio.h>

/**
 * main - test temporaire de la fonction _strchr
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("Résultat : %s\n", f);
	}
	else
	{
		printf("Caractère non trouvé.\n");
	}

	return (0);
}
