#include <stdio.h>
/**
 * _strlen - returns the lentgh of string
 * @a: length
 * @s: is the string
 * Returns: the length. 
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
