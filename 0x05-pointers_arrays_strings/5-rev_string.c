#include "main.h"
/**
 * rev_string - it is a function that reverses a string.
 * @s - character input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char n = s[0];
	int i, counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		n = s[i];
		s[i] = s[counter];
		s[counter] = n;
	}
}
