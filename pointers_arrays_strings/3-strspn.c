#include "main.h"

/**
 * _strspn - calcule la longueur du segment initial d'une chaîne
 *            qui ne contient que des caractères acceptés
 * @s: chaîne principale à analyser
 * @accept: ensemble de caractères autorisés
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cpt = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found == 0)
			break;

		cpt++;
		s++;
	}

	return (cpt);
}

