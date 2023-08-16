#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - loopt to make grid
 * @width: input of width
 * @height: input for the height
 * Return: pointer to the 2 dim arrau
 */

int **alloc_grid(int width, int height)
{
	int **ooh;
	int v;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	ooh = malloc(sizeof(int *) * height);

	if (ooh == NULL)
		return (NULL);

	for (v = 0; v < height; v++)
	{
		ooh[v] = malloc(sizeof(int) * width);

		if (ooh[v] == NULL)
		{
			for (; v >= 0; v--)
				free(ooh[v]);

			free(ooh);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (w = 0; w < width; w++)
			ooh[v][w] = 0;
	}

	return (ooh);
}

