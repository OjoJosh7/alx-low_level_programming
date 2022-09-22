#include "main.h"
/**
 * string_toupper - It is a function that changes
 * all lowercase letters of a string to uppercase.
 * Return: uppercase letters
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
