#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description: prints alphabets in lowercase x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char n;
	int i = 1;

	while (i <= 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
