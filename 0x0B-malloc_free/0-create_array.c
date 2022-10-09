#include <stdio.h>
#include <stdlib.h>

#include "main.h"
/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size allocated to the array
 * @c: specific character used to initialise
 * Return: Null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

array = malloc(size * sizeof(char));
	if (array == NULL && size == 0)
		return (NULL);

array = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
