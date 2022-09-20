#include "main.h"
/**
 * puts_half - it is a  a function that prints half of a string,
 * followed by a new line.
 * @str: character input
 * @len; it is the length of the character,
 * if it is odd n = (len - 1)/2
 * Return: half of the length
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	n = (len / 2);
	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
