#include <stdio.h>

/**
 * main - print_comb
 *
 * Description: prints all possible combinations of single-digit numbers
 * Return: Return 0
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
