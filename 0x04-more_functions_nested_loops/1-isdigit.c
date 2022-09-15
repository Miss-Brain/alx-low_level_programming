#include "main.h"

/**
 * _isdigit - checks for character that are digit
 * @c: character to check
 *
 * Return: equals to 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

		return (0);
}
