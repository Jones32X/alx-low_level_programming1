#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: max range of saved values
 * @max: min range of saved values
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int j;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pointer[j] = min++;

	return (pointer);
}
