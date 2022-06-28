#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *stry;
	unsigned int i, j;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	stry = (char *)malloc(sizeof(char) * (i + 1));

	if (stry == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		stry[j] = str[j];
	return (stry);
}
