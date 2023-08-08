#include "main.h"

/**
 * _strspn - entry point
 * @s: input value
 * @accept: input value
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				k++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
