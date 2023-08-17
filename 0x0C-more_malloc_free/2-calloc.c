#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memomry
 * @s: area of memory o be filled
 * @b: character to be copied
 * @n: counter of copies
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}

/**
 * *_calloc - fills memory with byte const
 * @nmemb: amount of array elements
 * @size: element size
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
