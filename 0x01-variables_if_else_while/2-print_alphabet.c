#include <stdio.h>
/**
 * main - print_alphabet
 *
 * Description: prints the alphabet in lowercase
 * Return: Return 0.
*/
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
