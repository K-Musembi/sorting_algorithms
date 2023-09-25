#include "sort.h"

/**
 * bubble_sort - sort an array of integers
 * @array: array of integers
 * @size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag = 1;
	int temp;

	while (flag && size > 1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
