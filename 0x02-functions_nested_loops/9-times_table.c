#include "main.h"
/**
 * times_table - this is a function that prints the 9 times table,
 * starting with 0.
 * @i, j: i = row, j = column
 * Return: table 9
 */

void times_table(void)
{
	int i, j, d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		d = (i * j);
		for (j = 1; j <= 9; j++)
		{
			d = (i * j);
			if ((d / 10) + '0')
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
