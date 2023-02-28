#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n elements of th earray
 * @a: array of integers
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int a)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}