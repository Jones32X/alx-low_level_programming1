#include "main.h"

/**
 * _islower - scans for lowercase characters
 * @c: charcater to be checked
 *
 * Return: 1 if c is a lowercase character else
 * 0 if not lowercase character.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
