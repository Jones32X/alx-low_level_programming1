#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @c: assigns character
 * @size: array size
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str =  malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
