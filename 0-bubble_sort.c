#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

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

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
