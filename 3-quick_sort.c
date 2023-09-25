#include "sort.h"

/**
 * quick_sort - function that sorts an array of ints in ascending order
 * using quick sort algorithm
 * @array: list of numbers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int low;
	int high;

	if (array == NULL || size == 0)
		return;

	low = 0;
	high = size - 1;

	my_sort(array, low, high, size);
}

/**
 * my_sort - sorts array using low / high positions
 * @array: list of numbers
 * @low: first index of array
 * @high: last index of array
 * @size: size of array
 */
void my_sort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		my_sort(array, low, p - 1, size);
		my_sort(array, p + 1, high, size);
	}
}

/**
 * partition - sections an array using Lomuto quick_sort algo
 * @array: list of integers
 * @low: first index of array
 * @high: lowest index of array
 * @size: size of array
 * Return: position of pivot in array
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * swap - swap values in array
 * @array: list of ints
 * @i: first element to swap
 * @j: second element to swap
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
