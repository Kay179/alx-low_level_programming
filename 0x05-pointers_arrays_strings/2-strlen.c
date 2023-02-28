#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s: is the string
 * Returns: length
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
