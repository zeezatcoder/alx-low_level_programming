#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 *
 * Description: Print a to z in lower and upper
 *
 * Return: 0
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(tolower(alphabet));
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);

}
