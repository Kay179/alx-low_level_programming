#include <stdio.h>

/**
 * main - prints lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
