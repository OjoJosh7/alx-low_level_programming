#include "main.h"
/**
 * print_rev - it is a function that prints a string, in reverse,
 *  followed by a new line.
 *  @s: the character input
 *  Return: string in reverse form
 */

void print_rev(char *s)
{
	int counter = 0, i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
