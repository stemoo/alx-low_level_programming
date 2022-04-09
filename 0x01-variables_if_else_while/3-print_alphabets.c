#include <stdio.h>

/**
 * main - Inout alphabets in lower and upper case
 *
 * Return: Always (Sucess_
 */
int main(void)
{
	char alph, ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}

	putchar('\n');

	return (0);
}
