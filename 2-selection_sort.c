#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, low, tmp;
	int *head;

	head = array;
	for (i = 0; i < size; i++, head++)
	{
		for (low = i, j = i; j < size; j++)
			if (array[j] < array[low])
				low = j;
		tmp = array[low];
		array[low] = *head;
		*head = tmp;
		print_array(array, size);
	}
}
