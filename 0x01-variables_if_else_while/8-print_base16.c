#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char temp;

/**
 *  Hexadecimal value has 16 alphanumeric values from 0 to 9
 * and A to F, with the base 16
 */
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (temp = 'a'; temp <= 'f'; temp++)
		putchar(temp);
	putchar('\n');

	return (0);
}
