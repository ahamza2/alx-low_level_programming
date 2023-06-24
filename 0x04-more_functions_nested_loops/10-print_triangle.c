#include "main.h"

/**
 * print_triangle - Prints a traingle, followed by a new line
 * @size: Defines size of traingle
 * Return: void function
 */

void print_triangle(int size)
{
	int i, j;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
