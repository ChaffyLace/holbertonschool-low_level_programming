#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - affiche une chaîne de caractères
 * @s: la chaîne à afficher
 *
 * Return: rien (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
