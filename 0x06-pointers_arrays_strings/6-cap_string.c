#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * Separators of words: space, tabulation
 * @s: that point string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[counter] == ' ' || s[counter] == '\t' || s[counter] == '\n'
				|| s[counter] == ',' || s[counter] == ';' || s[counter] == '.'
				|| s[counter] == '.' || s[counter] == '!' || s[counter] == '?'
				|| s[counter] == '"' || s[counter] == '(' || s[counter] == ')'
				|| s[counter] == '{' || s[counter] == '}')
		{
			if (s[counter + 1] >= 97 && s[counter + 1] <= 122)
			{
				s[counter + 1] = s[counter + 1] - 32;
			}
		}
		counter++;
	}
	return (s);
}
