#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers.
 * @a: First int to swap
 * @b: Next int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
