#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *stry;
	unsigned int i, j, k, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	stry = malloc(sizeof(char) * (i + j + 1));

	if (stry == NULL)
	{
		free(stry);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		stry[k] = s1[k];

	len = j;

	for (j = 0; j <= len; k++, j++)
		stry[k] = s2[j];

	return (stry);
}
