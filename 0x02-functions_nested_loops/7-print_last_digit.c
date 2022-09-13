#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @y: integer argument
 * Return: last digit of number
 */

int print_last_digit(int y)
{
	int e, f;

	e = y % 10;
	if (e < 0)

		e = -1;
	f = '0' + e;
	_putchar(f);

	return (e);

}
