#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i; /* variable utilisée pour parcourir les lignes */
	int diag1 = 0; /* somme de la diagonale principale */
	int diag2 = 0; /* somme de la diagonale secondaire */

	/* Boucle pour parcourir chaque ligne de la matrice */
	for (i = 0; i < size; i++)
	{
		/*
		 * Pour accéder à l’élément d’une matrice à 2 dimensions
		 * stockée sous forme de tableau simple :
		 * - Diagonale principale : a[i * size + i]
		 * - Diagonale secondaire : a[i * size + (size - 1 - i)]
		 */
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}

	/* Affiche la somme des deux diagonales séparées par une virgule */
	printf("%d, %d\n", diag1, diag2);
}
