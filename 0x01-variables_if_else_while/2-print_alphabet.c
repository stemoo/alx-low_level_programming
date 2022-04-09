#include <stdio.h>

/**
 * main - Print a - z in small letters
 *
 * Return: Always (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');
	return (0);
}
