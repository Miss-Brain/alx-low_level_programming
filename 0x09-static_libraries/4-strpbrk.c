#include "main.h"
# define NULL 0

/**
 * _strpbrk - searches a string for any of set of byte
 * @s: string to check
 * @accept: string to check against
 * Return: pointer tp byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (NULL);
}
