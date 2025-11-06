#include "main.h"

/**
 * factorial - retourne le factoriel d'un nombre
 * @n: nombre
 *
 * Return: factoriel, ou -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (0)
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
