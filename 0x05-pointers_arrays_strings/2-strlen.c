#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 *@s: a character inpu
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 1;
	int add = 0;
	char str = s[0];

	while (str != '\0')
	{
		add++;
		str = s[i++];
	}
	return (add);
}
