#include "main.h"
#include <ctype.h>

/**
 * _isupper - a function that checks for uppercase characters
 * @c: a variable that stores letters
 * Return: Returns a value of 1 if the variable c contains an uppercase
 */

int _isupper(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
