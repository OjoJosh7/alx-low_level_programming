#include "main.h"
/**
 * reverse_array - a fuction that reverses the array of an integer
 * @a: elements in the array
 * @n: number of elements in the array
 * Return: always 0 (success)
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
