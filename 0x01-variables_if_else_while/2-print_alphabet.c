#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char q;

	q = 'a';

	while (q <= 'z')
{

	putchar(q);

	q++;
}

putchar('\n');
return (0);
}
