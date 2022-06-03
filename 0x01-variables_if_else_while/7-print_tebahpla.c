#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
