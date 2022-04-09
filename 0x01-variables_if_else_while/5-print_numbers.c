#include <stdio.h>

/**
 * main - Print numbers from zero to ten
 *
 * Returns: Always (Success)
 *
 */

int main(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}

	putchar('\n');

	return (0);
}
