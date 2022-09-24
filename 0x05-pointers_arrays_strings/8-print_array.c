#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: it is pointer variable
 * @n: it is an integer input
 * Return: elements
 */

void print_array(int *a, int n)
{
	int i, co;

	i = 0;
	co = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && co < n)
		{
			printf("%d, ", a[i]);
			i++;
			co++;
		}
		printf("%d\n", a[i]);
 	}
}
