#include "sort.h"

/**
 * bubble_sort - sorts aray of intergers in asc order woth bubble sort.
 * @array: holds integers to sort
 * @size: is the array size
 */

void bubble_sort(int *array, size_t size)
{
	bool swp;
	int i;
	int tmp;
	int next;

	if (array == NULL || size == 0)
		return;
	do {
		swp = false;
		i = 0;
		for (next = size - 1; i < next; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swp = true;
				print_array(array, size);
			}
		}
		next--;
	} while (swp);
}
