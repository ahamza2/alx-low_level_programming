#include "main.h"

/**
 * main - Entry point.
 *
 * Return: return 0
 */

int main(void)
{
	long int i, max, nbr;

	nbr = 612852475143;
	max = -1;

	while (nbr % 2 == 0)
	{
		max = 2;
		nbr /= 2;
	}

	for (i = 3; i <= sqrt(nbr); i = i + 2)
	{
		while (nbr % i == 0)
		{
			max = i;
			nbr = nbr / i;
		}
	}

	if (nbr > 2)
		max = nbr;

	printf("%ld\n", max);

	return (0);
}
