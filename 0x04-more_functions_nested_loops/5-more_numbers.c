#include "main.h"

/**
 * more_numbers - print 10 times number(1-14)
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 14; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			_putchar('1');
			putchar((b % 10) + '0');
		}

		_putchar('\n');
	}
}
