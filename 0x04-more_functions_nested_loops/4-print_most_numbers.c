#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 - 9 (exluding 2 and 4).
 *
 * Return: void function
 */

void print_most_numbers(void)
{
	char number;

	for (number = 48; number <= 57; number++)
	{
		if (number == 50 || number == 52)

			continue;

		else

			_putchar(number);

	}
	_putchar('\n');
}
