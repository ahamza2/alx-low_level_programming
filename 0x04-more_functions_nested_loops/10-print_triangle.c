#include "main.h"

/**
 * print_triangle - Prints a traingle, followed by a new line
 * @size: Defines size of traingle
 * Return: void function
 */
void print_triangle(int size)
{
	int i;
	int k;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i <= (size - 1))
		{

			for (k = 0; k < (size - 1) - i; k++)
			{
				_putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			i++;
			_putchar('\n');
		}
	}
}