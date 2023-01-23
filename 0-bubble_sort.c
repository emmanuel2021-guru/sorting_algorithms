#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - sorts an array of integers using
 * 		 the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of items in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap_counter = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swap_counter = 1;
				print_array(array, size);
			}
		}
		if (swap_counter == 0)
			break;
		else
			swap_counter = 0;
	}
}

/**
 * swap - swaps two items in an array
 * @a: First item to be swapped
 * @b: Second item to be swapped
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
