#include "main.h"

/**
 *_strlen - counts the size of a string
 *@s: the string in question
 *Return: returns the count of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
