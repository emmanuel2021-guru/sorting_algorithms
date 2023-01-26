#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - sorts an array of integers using
 * the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of items in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, equal_counter = 0;
	int swap_counter = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] != array[0])
			equal_counter += 0;
		else
			equal_counter++;
	}
	printf("ec: %lu\n", equal_counter);
	if (sizeof(array) >= 2 && equal_counter != size)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size && (j + 1) < size; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					swap_counter = 1;
					print_array(array, size);
				}
				else
					continue;
			}
			if (swap_counter == 0)
				break;
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
