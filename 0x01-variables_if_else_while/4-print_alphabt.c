#include <stdio.h>

/**
 * main - print_alphabt
 *
 * Description: prints the alphabet in lowercase, except e and q.
 * Return: Return 0
*/
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
