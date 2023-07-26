#include "main.h"

/**
 * print_rev - imprime em reversa
 * @S: String
 * return:0;
 */

void print_rev(char *S)
{
	int longi = 0;
	int o;

	while (*S != '\0')
	{
		longi++;
		S++;
	}
	S--;
	for (o = longi; o > 0; 0--)
	{
		_putchar(*S);
		s--;
	}
	_putchar('\n');
}
