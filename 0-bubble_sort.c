#include "sort.h"

/**
 * bubble_sort - an algo tha sort a list of integer
 * @array: ptr to the list of the integers
 * @size: the lenght of the array
 * Return: void.
*/
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	int unsorted = 1, tmp;

	if (!array)
		return;

	while (unsorted)
	{
		unsorted = 0;

		for (idx = 0; idx < size - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				unsorted = 1;
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
