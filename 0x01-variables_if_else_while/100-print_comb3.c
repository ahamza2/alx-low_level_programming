#include <stdio.h>

/**
 * main - print_comb3
 *
 * Description: prints all possible different combinations of two digits.
 * Return: Return 0.
*/
int main(void)
{
	int j;
	int i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i < 8 || j < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar ('\n');
	return (0);
}