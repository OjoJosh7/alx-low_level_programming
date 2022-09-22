#include "main.h"
/**
 * leet - it is a function that encodes a string
 * @n: string inputed
 * Return: always 0 (success)
 */

char *leet(char *n)
{
	int i, a;
	int Alph[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int Num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (n[i] == Alph[a])
			{
				n[i] = Num[a / 2];
			}
		}
	}
}
