#include "main.h"
/**
 * _strncpy - it is a function that copies a string to another string
 * @dest: destination of the string to be appended
 * @src: the string to be appended
 * @n: size of string to be appended
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
