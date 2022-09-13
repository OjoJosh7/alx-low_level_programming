#include "main.h"
/**
 * _islower - it is afunction that checks for lowercase character
 * @c: is an alphabet input
 * Return: 1 if int c is lowercase, 0 if it is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
