#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: result folloewd by new line
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar(j + '0');
	_putchar ('\n');
}
