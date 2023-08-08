#include "main.h"

/**
 * _memset - fills blocks of memory with specified values
 * @s: memory starting address
 * @b: required value
 * @n: amount of values requiring changes
 *
 * Return: replace array with updated value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;
	a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
