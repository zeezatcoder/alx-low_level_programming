#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	for (; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else if (count % 2 == 0)
			_putchar(str[count]);
	}
}
