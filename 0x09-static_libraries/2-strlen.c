#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int m = 0;

	while (*(s + m))
		m++;
	return (m);
}
