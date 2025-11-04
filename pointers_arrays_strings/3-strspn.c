#include "main.h"

/**
 * _strspn - calcule la longueur du segment initial d'une chaîne
 *            qui ne contient que des caractères acceptés
 * @s: chaîne principale à analyser
 * @accept: ensemble de caractères autorisés
 *
 * Description :
 * Cette fonction parcourt la chaîne 's' depuis le début
 * et compte combien de caractères consécutifs appartiennent
 * à la chaîne 'accept'. Dès qu’un caractère non présent dans
 * 'accept' est trouvé, la fonction s'arrête et retourne le nombre
 * de caractères valides comptés jusque-là.
 *
 * Return: le nombre de caractères initiaux dans 's'
 * qui appartiennent à 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}

	return (count);
}

