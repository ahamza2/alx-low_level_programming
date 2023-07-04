#include "main.h"

/**
 * _memcpy - a function
 * @dest:  variable char pointer
 * @src: variable char pointer
 * @n: variable integer
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
