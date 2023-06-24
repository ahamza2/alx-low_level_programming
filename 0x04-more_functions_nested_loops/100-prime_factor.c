#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: return 0
 */

int main(void)

{
	long n, i;

	n = 612852475143;
	i = 2;
	while (i < n)
	{
		while (n % i == 0)
			n = n / i;
		i++
	}
	printf("%lu\n", n);
	return (0);
}
