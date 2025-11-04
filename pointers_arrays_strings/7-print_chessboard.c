#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for(int i = 0;i < 8;i++)
	{
		for(int j = 0; j < 8;j++)
		{
			_putchar(a[i][8]);
		}
		putchar('\n');
	}
}
