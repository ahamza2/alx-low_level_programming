#include "main.h"
/**
* print_alphabet - prints alphabet
* Return: void function.
*/

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}