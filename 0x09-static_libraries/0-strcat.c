#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: string that src will be appended on
 * @src: string to append on dest
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}
