#include <stdio.h>

/**
 * main - print_numbers
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Return 0
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
