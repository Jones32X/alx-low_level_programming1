#include <stdio.h>

/**
 * main - Program entry point
 * Return: Always 0 (Suceess)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
