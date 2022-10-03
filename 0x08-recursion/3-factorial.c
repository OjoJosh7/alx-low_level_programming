#include "main.h"
/**
 * factorial - finds the factorial of a given number
 * @n: given integer
 * Return: the factorial of the number
 */

int factorial(int n)
{
	int fac = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fac = (n * factorial(n - 1));
	return (fac);
}
