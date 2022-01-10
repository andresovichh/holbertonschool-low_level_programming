#include "main.h"

/**
 * _isdigit - returns 1 if input is digit
 *
 * Return: Always 0
 *
 * @c: ere
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
