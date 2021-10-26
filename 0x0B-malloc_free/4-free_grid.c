#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - returns pointer to 2 dim array of int
 *
 * @grid: width of array
 * @height: height of array
 * Return: Always 0
 */


void free_grid(int **grid, int height)
{
	grid = malloc(sizeof(grid) + height);
}
