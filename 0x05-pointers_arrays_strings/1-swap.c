#include "main.h"

/**
 *swap_int - swaps two variable values
 *@a: variable first 
 *@b: variable second
 *Return: void function
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
