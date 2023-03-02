#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e
 * Return: 0
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
