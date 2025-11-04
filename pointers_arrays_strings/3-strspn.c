#include "main.h"

/**
 * _strspn - calcule la longueur du segment initial d'une chaine
 *            qui ne contient que des caractres acceptes
 * @s: chaine principale analyser
 * @accept: ensemble de caractres autorise√
 * Description : osdisudoi
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

