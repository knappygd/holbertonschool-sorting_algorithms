#include "sort.h"

/**
 * swap - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitions the array for the quick sort algorithm
 * @array: pointer to the array
 * @low: starting index of the partition
 * @high: ending index of the partition
 * Return: The index of the pivot element
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sorts - implements the Quick sort algorithm recursively
 * @array: pointer to the array
 * @low: starting index of the partition
 * @high: ending index of the partition
*/

void quick_sorts(int *array, int low, int high)
{
	if (low < high)
	{
		int pi;

		pi = partition(array, low, high);
		quick_sorts(array, low, pi - 1);
		quick_sorts(array, pi + 1, high);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick sort algorithm
 * @array: pointer to the array
 * @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	{
		return;
	}
	quick_sorts(array, 0, size - 1);
}