#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: void function
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}

