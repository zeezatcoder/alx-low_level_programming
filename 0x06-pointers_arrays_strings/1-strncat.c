#include "main.h"

/**
 * _strncat: function that concatenates two strings. it will use
 * at most n bytes from src doesnt not need to be null-terminated
 * @dest: that point to the destination str
 * @src: that point tothe soure str
 * @n: the number tha will be concatenated
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	/* length is the destination of string */
	/* i count the bytes from the source */

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
