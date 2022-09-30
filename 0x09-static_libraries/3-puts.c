#include "main.h"

/**
 * _puts - function that print a string, followed by new line
 * @str: pointer that point the string
 * Return: nothing
 */

void _puts(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
