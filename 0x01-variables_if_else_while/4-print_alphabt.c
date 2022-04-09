#include <stdio.h>

/**
 * main - prints lowercase alphabets except letters e and q
 *
 * Return: Always (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}

	putchar('\n');

	return (0);
}
