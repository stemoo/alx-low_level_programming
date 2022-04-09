#include <stdio.h>

/**
 * main - Print numbers from zeroo to nine separated by a comma
 *
 * Return: Always(Success)
 */

int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		if (numb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
