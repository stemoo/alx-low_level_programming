#include <stdio.h>

/**
 * main - print z - a
 *
 * Return: Always (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}
