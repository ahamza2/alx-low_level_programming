#include "main.h"
/**
 * print_to_98 - print numbers start from n to 98
 * @n: the number to start from
 * Return: void function (returns nothing)
*/
void print_to_98(int nbr)
{
	while (nbr != 98)
	{
		printf("%d, ", nbr);
		if (nbr > 98)
			nbr--;
		if (nbr < 98)
			nbr++;
	}
	printf("%d\n", nbr);
}
