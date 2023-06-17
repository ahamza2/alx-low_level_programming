#include <stdio.h>

/**
 * main - print_comb4.c
 *
 * Description: prints all possible different combinations of three digits.
 * Return: Return 0
*/
int main(void)
{
	int i;
	int j;
	int z;

	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 8)
		{
			z = 0;
			while (z <= 9)
			{
				if (z > j && j > i)
				{
					putchar(i + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (i < 7 || j < 8 || z < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
