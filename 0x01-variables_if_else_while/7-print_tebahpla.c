#include <stdio.h>

/**
 * main - Entry point
 * code description
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;

	j = 'z';

	while (j >= 'a')

{
	putchar(j);
	j--;
}
	putchar('\n');
	return (0);
}
