#include "sort.h"

/**
 * selection_sort - sorts an array of integers using Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i;
	int conv_s = size;
	int min;
	int tmp;
	int j;

	for (i = 0; i < conv_s - 1; i++)
	{
		min = i;
		for (j = i + 1; j < conv_s; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
