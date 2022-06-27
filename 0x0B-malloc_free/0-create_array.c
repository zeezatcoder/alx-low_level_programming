#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: of an array
 * @c: character to work on
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
