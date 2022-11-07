#include "sort.h"
#include <stddef.h>

/**
 * swap - swaps array elements
 * @xp: ptr to array element
 * @yp: prt to array element
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of elements
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	char isSorted;

	/* if array does not need to be sorted if its size < than 2 */
	if (array == NULL || size < 2)
		return;

	for (x = 1; x < size; x++)
	{
		isSorted = 1;
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
				isSorted = 0;
				print_array(array, size);
			}
		}
		if (isSorted == 1)
			break;
	}
}
