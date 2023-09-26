#include "sort.h"

/**
 * merge_sort - sort an array of integers
 * @array: array to sort
 * @size: size of array
 *
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	size_t mid;
	size_t high = size - 1;
	
	if (size > 1)
	{
		mid = size / 2;
		merge_sort(array, mid);
		merge_sort(array + mid, size - mid);

		merge(array, mid, high);
	}
}

/**
 * merge - merge sorted elements
 * @array: array to sort
 * @low: starting index
 * @mid: mid index
 * @high: last index
 *
 * Return: nothing
 */
void merge(int *array, size_t mid, size_t high)
{
	size_t l = 0, j = 0, k = 0, i;
	size_t l_size = mid + 0;
	size_t r_size = high - mid;
	int left[1024];
	int right[1024];

	for (i = 0; i < l_size; i++)
		left[i] = array[i];

	for (i = 0; i < r_size; i++)
		right[i] = array[mid + 1 + i];

	while (l < l_size && j < r_size)
	{
		if (left[l] <= right[j])
		{
			array[k] = left[l];
			l++;
		}
		else
		{
			array[k] = right[j];
			j++;
		}
		k++;
	}
	while (l < l_size)
	{
		array[k] = left[l];
		l++;
		k++;
	}
	while (j < r_size)
	{
		array[k] = right[j];
		j++;
		k++;
	}
}
