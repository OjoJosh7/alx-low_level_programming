#include "main.h"
/**
 * _check_prime - it checks whether a number is a prime number
 * @x: prime number
 * @y: factor check
 * Return: prime number
 */

int _check_prime(int x, int y)
{
	if (x < 2 || x % y == 0)
		return (0);
	else if (y >= x / 2)
		return (1);
	else
		return (_check_prime(x, y + 1));
}


/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: inputed number
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2)
		return (1);
		return (_check_prime(n, 2));
}
