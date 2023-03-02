#include <stdio.h>

/**
 * main - prints base ten nums that're one digit only with
 * the putchar() function
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
