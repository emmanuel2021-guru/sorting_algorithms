#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index_lowest, temp;
	int num_lowest;

	for (i = 0; i < size; i++)
	{
		num_lowest = array[i];
		index_lowest = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < num_lowest)
			{
				num_lowest = array[j];
				index_lowest = j;
			}
		}
		if (index_lowest != i)
		{
			temp = array[i];
			array[i] = array[index_lowest];
			array[index_lowest] = temp;
			print_array(array, size);
		}
	}
}
