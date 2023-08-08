#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Sucess)
 */

char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
				return (s);
		}
		s++;
	}
	return ('\0');
}
