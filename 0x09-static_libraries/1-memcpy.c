#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory is stored
 * @src: memory is copied
 * @n: number of existing bytes
 *
 * Return: memory that is copied with n byte(s) changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d, l;

	d = 0;
	l = n;

	for (; d < l; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
