#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - array iterator
 * @array: an array
 * @size: size of the array
 * @action: mdasd
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iter;
	/** all arguments must exist*/
	if (array && action && size)
		for (iter = 0; iter < size; iter++)
		{
			(*action)(array[iter]);
			/**
			 * function is called by pointer *action.
			 * then, the argument or input for pointer
			 * of function *action is the actual array
			 * moving along the array.
			 */
		}





}
