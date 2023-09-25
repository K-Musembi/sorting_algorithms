#include "sort.h"

/**
 * quick_sort - sort an array of integers
 * @array: array to sort
 * @size: size of array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;
	int mid;

	mid = partition(&array, low, high);

	quick_sort(array, mid);
	quick_sort(array, high);
}

/**
 * partition - divide elements of array
 * @array: array to partition
 * @low: first index
 * @high: last index
 *
 * Return: mid element
 */
int partition(int **array, int low, int high)
{
	int pivot = *array[high];
	int i = low - 1, j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (*array[j] < pivot)
		{
			i += 1;
			temp = *array[i];
			*array[i] = *array[j];
			*array[j] = temp;
		}
	}
	temp = *array[i];
	*array[i] = *array[high];
	*array[high] = temp;
	
	return (i);
}
