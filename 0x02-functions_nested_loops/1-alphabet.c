#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char j;

	j = 'a';

	while (j <= 'z')
	{
	_putchar(j);
	j++;
	}
	_putchar('\n');
}
