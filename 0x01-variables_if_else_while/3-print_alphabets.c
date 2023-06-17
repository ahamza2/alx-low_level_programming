#include <stdio.h>
/**
 * main - print_alphabets
 *
 * Description: prints the alphabet in lowercase and uppercase
 * Return: Return 0
*/
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
