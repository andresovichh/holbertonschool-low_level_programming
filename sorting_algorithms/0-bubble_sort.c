#include "sort.h"


/**
 * @brief 
 * 
 */

void bubble_sort(int *array, size_t size)
{
size_t ctr = 0;
int *tmp = NULL;
for (ctr = 1; ctr <= size -1; ctr++)
{
if (array[ctr - 1] > array[ctr])
{
tmp = array[ctr];
array[ctr] = array[ctr - 1];
array[ctr] = tmp;
free(tmp);
}

}
}