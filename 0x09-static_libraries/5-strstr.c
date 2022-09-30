#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 * Return: pointer to beginning of needle or Null if no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{

			if (haystack[m + n] == needle[n])
				n++;
			else
				break;
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
			return (haystack + m);
	}
	return (0);
}
