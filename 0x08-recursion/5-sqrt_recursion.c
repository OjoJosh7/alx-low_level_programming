#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: inputed integer
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _sqrt_recursion(n - 1));
}
