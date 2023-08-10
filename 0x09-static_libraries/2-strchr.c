#include "main.h"

/**
 * _strchr - entry point
 * @s: input value
 * @c: input value
 *
 * Return: Always ZERO(0/SUCESS)
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
