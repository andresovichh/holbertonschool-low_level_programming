#include "main.h"

/**
 * _isupper - this checks for lowercase
 *
 * @c: char
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
