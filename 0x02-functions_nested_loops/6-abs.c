#include "main.h"
/**
 * _abs - it is a function that computes the absolute value of an integer
 * @p: this is an inputed integer
 * Return: always 0 (success)
 */

int _abs(int p)
{
	return (p * ((p > 0) - (p < 0)));
}
