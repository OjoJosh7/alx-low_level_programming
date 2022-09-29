#include "main.h"
/**
 * _puts_recursion - it is a function that prints a string,
 * followed by a new line.
 * @s: inputed string
 * Return: string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
