#include "main.h"

/**
 * puts2 - function should print only onec character out of two
 * starting with the first one
 * @str: input
 * Returb: print
 */
void puts2(char *str)
{
	int logi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
			_putchar(str[0]);
	}
	}
	_putchar('\n')
}