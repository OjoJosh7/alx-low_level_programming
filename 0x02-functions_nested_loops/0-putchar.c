#include "main.h"

/**
 * main - It initiates the code block
 * Return: Always 0 (success)
 */
int main(void)
{
	char *ml = "_putchar";

	while (*ml)
	{
		_putchar(*ml);
		ml++;
	}
	_putchar('\n');

	return (0);
}
