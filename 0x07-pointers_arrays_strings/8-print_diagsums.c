#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a matrix
 *@a: a pointer to the array
 *@size: the size of the array
 *Return: void function
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[i];
		a += size;
		i++;
	}
	a -= size;
	i = 0;
	while (i < size)
	{
		sum_2 += a[i];
		a -= size;
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}