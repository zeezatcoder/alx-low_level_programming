#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: bytes of memory thats to be filled
 * @s: area poited to
 * @b: constant to fill memory with
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
