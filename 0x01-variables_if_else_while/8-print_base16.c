#include <stdio.h>

/**
 * main - print_base16
 *
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: Return 0.
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
