#include "main.h"
#include <stddef.h>

/**
 * _strchr - recherche un caractère dans une chaîne de caractères
 * @s: la chaîne dans laquelle on cherche
 * @c: le caractère à trouver
 *
 * Description :
 * Cette fonction parcourt la chaîne 's' caractère par caractère
 * jusqu'à trouver la première occurrence du caractère 'c'.
 * Si le caractère est trouvé, la fonction retourne un pointeur
 * vers la position de ce caractère dans la chaîne.
 * Si le caractère n'est pas trouvé, elle retourne NULL.
 *
 * Return: pointeur vers le premier caractère trouvé,
 * ou NULL si le caractère n'est pas présent.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

