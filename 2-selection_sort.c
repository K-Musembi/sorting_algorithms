#include "sort.h"

/**
 * selection_sort - sort an array of integers
 * @array: array to sort
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 0;

	if (!array || size <= 1)
		return;
	i = 0;
	while (i < size)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap_array(&array[i], &array[j]);
				flag = 1;
			}
		}
		if (flag)
			print_array(array, size);
		i++;
	}
}

/**
 * swap_array - swap elements of array
 * @one: first element
 * @two: second element
 *
 * Return: nothing
 */
void swap_array(int *one, int *two)
{
	int temp;

	temp = *one;
	*one = *two;
	*two = temp;
}
