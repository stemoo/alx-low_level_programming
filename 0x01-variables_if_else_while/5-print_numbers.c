#include <stdio.h>

/**
 * main - Prin numbers from 0 to 10
 *
 * Returns: Always (Success)
 *
 */

int main(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
		printf(numb);

	printf('\n');

	return (0);
}
