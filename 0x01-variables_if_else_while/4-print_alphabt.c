#include <stdio.h>
/**
 * main - it initiates the code
 * Return: always 0 (success)
 */

int main(void)
{
char b;

for (b = 'a'; b <= 'z'; b++)
{
	if (b == 'q' || b == 'e')
	{
		continue;
	}
	putchar(b);
}
putchar('\n');
return (0);
}
