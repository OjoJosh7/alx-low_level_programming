#include "main.h"

/**
 * print_alphabet - a function that displays the alphabet in lowercase
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
