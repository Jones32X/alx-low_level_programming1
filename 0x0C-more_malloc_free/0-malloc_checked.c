#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function allocates memory using malloc
* @b: amount of bytes to be allocated
* Return: pointer to  allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
