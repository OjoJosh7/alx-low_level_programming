#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: it is an inputed value
 * Return: the value of the last digit (success)
 */

int print_last_digit(int r)
{
	int p;

	p = (r % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}
	_putchar('0' + p);
	return (p);
}
