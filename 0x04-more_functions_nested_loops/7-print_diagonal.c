#include "main.h"

/**
 * print_diagonal -  a function that prints a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < co; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
