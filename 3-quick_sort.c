#include "sort.h"

void recSort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *xp, int *yp);

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of elements
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	recSort(array, 0, size - 1, size);
}

/**
 * recSort - recursive sorting algorithm
 * @array: array to be sorted
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 */
void recSort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		recSort(array, low, pivot - 1, size);
		recSort(array, pivot + 1, high, size);
	}
}

/**
 * partition - splits array
 * @array: array to be sorted
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 *
 * Return: pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * swap - swaps array elements
 * @xp: ptr to array element
 * @yp: prt to array element
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
