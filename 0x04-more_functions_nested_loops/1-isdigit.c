#include "main.h"
/**
 * _isdigit - it is a function that checks for a digit (0 through 9)
 * @c: the inputed number
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
	return (1);
else
	return (0);
}
