#include <stdio.h>

/**
 * _strlen - returns the lentgh of a string
 * @a: length
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
