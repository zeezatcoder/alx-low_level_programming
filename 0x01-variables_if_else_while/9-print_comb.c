#include <stdio.h>
/**
 *  main - Prints a series of numbers with commas
 *
 *   * Return: Always (Success);
 *
 */
int main(void)
{
	int q;

	for (q = '0'; q <= '9'; q++)
	{
		putchar(q);

		if (q != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
