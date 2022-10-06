#include "main.h"
/**
 * check_strlen - finds the length of a string
 * @str: inputed string
 * Return: length of string
 */

int check_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + check_strlen(str + 1));
}

/**
 * palindrome_check - checks if a number is a palindrome
 * @x: first index
 * @y: last index
 * @s: string
 * Return:  1 if string is a Palindrome, 0 if not.
 */

int palindrome_check(char *s, int x, int y)
{
	if (x < y)
		return (1);
	else if (s[x] != s[y])
		return (0);
	else
		return (palindrome_check(x + 1, y - 1, s));
}

/**
 * is_palindrome - checks if a string is a palindromr
 *@s: it is the inputed string
 * Return: 1 if it is a palindrome
 */

int is_palindrome(char *s)
{
	int i;

	i = check_strlen(s) - 1;
	return (palindrome_check(0, i, s));
