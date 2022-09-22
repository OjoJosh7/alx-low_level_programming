#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char temp;

	for (temp = 'z'; temp >= 'a'; temp--)
		putchar(temp);
	putchar('\n');

	return (0);
}
