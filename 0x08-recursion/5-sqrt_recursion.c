#include "main.h"
/**
 *  _num_check - a function that checks if a number has natural square root
 * @x: inputed number
 * @y: square of number
 * Return: square root of number
 */

int _num_check(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (_num_check(y, x - 1));
	else if (x * x < y)
		return (_num_check(y, x + 1));
	else
		return (-1);

}

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
	else if (n == 1)
		return (1);
	else
		return (_num_check(n, 1));
}
