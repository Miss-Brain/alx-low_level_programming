#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target match
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int m, n;


	/* going through string */

	for (m = 0; s[m]; m++)
	{
		/* going through target */

		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])

				break;
		}

		 /* check if index don't match, return same */

			if (!accept[n])

				break;

	}

	/* return no. if all match till end */
	return (m);
}
