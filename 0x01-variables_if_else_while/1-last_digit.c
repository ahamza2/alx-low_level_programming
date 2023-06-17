#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last_digit.c
 *
 * Description: print last digit of the number stored in the variable n.
 * Return: Return 0.
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}

	printf("\n");

	return (0);
}
