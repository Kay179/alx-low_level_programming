#include "main.h"
#include <stdio.h>

/**
 * main - a function that takes a pointer to an int n
 * and updates the value to 98.
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;

        n = 402;
        printf("n=%d\n", n);
        reset_to_98(&n);
        printf("n=%d\n", n);
        return (0);
}

