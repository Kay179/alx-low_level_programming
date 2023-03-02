#include <stdio.h>

/**
 * main - prints bae 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int base16, lett;

	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
