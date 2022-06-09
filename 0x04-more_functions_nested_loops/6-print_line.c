#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * followed by a new line.
 * @n: as a parameter
 * Return: always 0 (success).
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
