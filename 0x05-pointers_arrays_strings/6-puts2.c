#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');


}
