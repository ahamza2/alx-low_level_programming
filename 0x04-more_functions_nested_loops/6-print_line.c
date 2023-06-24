#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: number of times the character should be printed
 * Return: void function
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
