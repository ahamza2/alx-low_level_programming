#include "main.h"

/**
 * char_str- a function
 * @s:  variable char pointer
 * @c: variable char
 * Return: return 1 or 0
 */

int char_str(char *s, char c)
{
	 unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strpbrk - a function
 * @s:  variable char pointer
 * @accept: variable char pointer
 * Return: return s or NULL
 */

char *_strpbrk(char *s, char *accept)
{

	unsigned int i = 0;

	while (s[i])
	{
		if (char_str(accept, s[i]))
			return (&s[i]);
		i++;
	}
	return (NULL);
}
