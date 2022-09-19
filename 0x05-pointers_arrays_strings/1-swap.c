#include "main.h"
/**
 * swap_int - function that swaps two integer
 * @a: frist integer
 * @b: second integer
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
