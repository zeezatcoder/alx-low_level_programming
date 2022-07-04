#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the name of the file
 *
 * Return: nothing
 */

void filename(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
/**
 * main - entr point
 * void: means nothing
 * Return: nothing
 */
int main(void)
{
	filename();
	return (0);
}
