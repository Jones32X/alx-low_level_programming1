#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: checks the character
 * Return: if uppercase is detected the return 1,
 * or else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
