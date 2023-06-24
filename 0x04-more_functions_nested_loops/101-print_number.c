#include "main.h"

/**
 * print_number - Prints integer
 * @n: stores integar
 * Return: void function
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else
		_putchar(num + '0');
}
