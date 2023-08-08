#include "main.h"

/**
 * _puts - prints string to standard output
 * @str: string to be output
 * _putchar: prints out on a brand new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

