#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to an array
 * @n: number of an element of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
