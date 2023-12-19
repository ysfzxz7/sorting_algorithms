#include "sort.h"

/**
 * selection_sort - func that sort some int with selct sort algo
 * @array: ptr to the array
 * @size: the lenght of the array
*/
void selection_sort(int *array, size_t size)
{
	int min, tmp, flag = 0;
	size_t i, j;

	if (!array || !(*array))
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				flag = 1;
			}
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (flag)
		{
			print_array(array, size);
			flag = 0;
		}
	}
}
