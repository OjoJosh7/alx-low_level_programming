#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar(j + '0');
	_putchar ('\n');
	return (0);
}
