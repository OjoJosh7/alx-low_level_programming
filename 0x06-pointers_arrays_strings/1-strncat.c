#include "main.h"
/**
 * _strncat - it is afunction that concatenates two strings,
 * it will use at most n bytes from src
 * @dest: Destination to append to
 * @src: string to be appended
 * @n: number of bytes to be used
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
