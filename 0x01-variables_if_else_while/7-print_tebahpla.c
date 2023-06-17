#include <stdio.h>

/**
 * main - print_tebahpla
 *
 * Description: prints the lowercase alphabet in reverse
 * Return: Return 0
*/
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
