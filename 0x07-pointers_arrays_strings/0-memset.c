#include "main.h"

/**
 * _memset - fill n byte of memory with a constant value
 * @s: pointer to a memory area
 * @b: constant value
 * @n: number of byte to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /* accept +ve no. */

	if (size > 0)
	{
		int p;

		for (p = 0; p < size; p++)
		{
			s[p] = b;
		}
	}
	return (s);
}
