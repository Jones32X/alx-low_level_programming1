#include "main.h"

/**
 * _strncpy - string copiedpointed by src is copied
 * @dest: copy
 * @src: copy
 * Return: value of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n, o;

	n = 0;
	o = 0;

	while (*(src + n) != '\0')
	{
		n++
	}
	for ( ; o < n ; o++)
	{
		dest[o] = src[o];
	}
	dest[n] = '\0';
	return (dest);
}


