#include <stdio.h>

/**
 * main - print zero to nine without using char variables
 *
 * Return: Always (Success)
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}

	putchar('\n');

	return (0);
}
