#include "main.h"
/**
 * swap_int - it is a fuction that swaps the value of two integers
 * @a: first variable
 * @b: second variable
 * Return: swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
