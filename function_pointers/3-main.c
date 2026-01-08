#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int (*op)(int, int);
	int a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(av[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	printf("%d\n", op(a, b));
	return (0);
}
