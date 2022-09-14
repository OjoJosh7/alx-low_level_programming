#include "main.h"
/**
 * jack_Bauer - function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
 * @h: stand for hour
 * @m: stand for minutes
 * Return: time in hours and minuteks
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
	}
	_putchar('\n');
}
