#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = d = 0;
	while (*(dest + c))
		c++;
	while (d < n && *(src + d))
	{
		*(dest + c) = *(src + d);
		c++;
		d++;
	}
	if (d < n)
		*(dest + c) = *(src + d);
	return (dest);
}
