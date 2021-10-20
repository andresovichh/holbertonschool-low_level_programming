#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: String to be printed
 *
 *
 *
 *
 *
 */

void _puts_recursion(char *s)
{

	if (*s == 0) /** Exit condition. If string reaches null, the exit. */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s); /** Print the first character */
	_puts_recursion(s + 1); /** Do the actual recursion and check the next item*/

}
