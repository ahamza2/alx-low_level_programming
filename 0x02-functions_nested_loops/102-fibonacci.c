#include <stdio.h>
/**
 * main - fibonacci
 *
 * Return: return 0
*/
int main(void)
{
	unsigned long counter, i, j, k;

	i = 0;
	j = 1;
	for (counter = 0; counter < 50; counter++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (counter == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
