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
	int i;
	int high = size - 1;

	i = partition(array, high, size);

	quick_sort(array, i);
	quick_sort(array + (i + 1), high);
}

/**
 * partition - divide elements of array
 * @array: array to partition
 * @high: last index
 * @size: size of array
 *
 * Return: partition index
 */
int partition(int *array, int high, size_t size)
{
	int i = 0, j;
	int pivot = array[high];

	for (j = 0; j <= (high - 1); j++)
	{
		if (array[j] < pivot && j != i)
		{
			swap_sort(&array[i], &array[j]);
			print_array(array, size);
			i += 1;
		}
	}
	swap_sort(&array[i], &array[high]);
	print_array(array, size);
	
	return (i);
}

/**
 * swap - swap elements of array
 * @one: first element
 * @two: second element
 *
 * Return: nothing
 */
void swap_sort(int *one, int *two)
{
	int temp;
	
	temp = *one;
	*one = *two;
	*two = temp;
}
