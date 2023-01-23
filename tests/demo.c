#include "sort.h"

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *array)
{
	int i, a, swap_count = 0;

	for (a = 0; a < 10; a++)
	{
		printf("Time %d\n-------------------\n", a);
		for (i = 0; i < 10; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				swap_count = 1;
				print_array(array, 10);
			}
			else
			{
				print_array(array, 10);
			}
		}
		if (swap_count == 0)
			break;
		else
			swap_count = 0;
	}
}

int main(void)
{
	int array[10] = {1, 10, 5, 6, 8, 2, 9, 7, 3, 4};

	bubble_sort(array);

	printf("------------------\n");
	print_array(array, 10);

	return (1);
}
