#include <stdio.h>

/**
 * void - swaps values of a and b in main function using pointers.
 * @a: integer value
 * @b: integer value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
