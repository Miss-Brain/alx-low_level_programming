#include <stdio.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	h = 'a';
	while (h <= 'z')
{
	if ((h != 'e') && (h != 'q'))
{

	putchar(h);
	h++;
}
	else
{
	h++;
}
}
	putchar('\n');
	return (0);
}
