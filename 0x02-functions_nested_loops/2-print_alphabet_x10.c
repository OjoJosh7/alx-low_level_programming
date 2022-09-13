#include "main.h"
/**
 * print_alphabet_x10(void) - it displays the alphabet 10 times in lower case
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int y, b;

	b = 0;

	while (b < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y)
		}
		b++;
		_putchar('\n')
	}

}
