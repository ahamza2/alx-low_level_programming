#include "main.h"
/**
* print_alphabet_x10 - prints the  alphabet 10 times
* Return: void function (returns nothing)
*/


void print_alphabet_x10(void)
{
	int i = 1;
	int c = 97;

	while (i <= 10)
	{
		c = 97;
		while (c <= 122)
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
