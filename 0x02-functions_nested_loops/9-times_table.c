#include "main.h"

/**
 * times_table - prints the times table
 * Return: void function (return nothing)
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int n = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (n <= 9)
					_putchar(' ');
			}
			if (n >= 0 && n < 10)
				_putchar(n + '0');
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
