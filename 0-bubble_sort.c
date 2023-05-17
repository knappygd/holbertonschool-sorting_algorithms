#include "sort.h"

/**
 * bubble_sort - Sort the elements in an array
 * using the bubble sorting algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array to be sorted.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
			}
		}
	}
}

/**
 * swap - Swaps two elements of an array.
 * @n1: First element.
 * @n2: Second element.
*/
void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
