#include "main.h"
# define NULL 0

/**
 * _strchr - locate 1st occurence of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to that character string
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	/* find match */
	while (s[j] != '\0' && s[j] != c)
		j++;
	/* if match, asign to address */
	if (s[j] == c)
		return (&s[j]);
	else
		return (NULL);

}
