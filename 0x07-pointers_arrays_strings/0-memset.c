#include "main.h"

/**
 * _memset - a function
 * @s:  variable char pointer
 * @b: variable char
 * @n: variable integer
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
