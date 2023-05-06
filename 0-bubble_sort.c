#include "sort.h"

/**
 * Author: Aaron Will Djaba
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * Author: Aaron Will Djaba
 * bubble_sort - sorts bubbly
 * @array: array to sort
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, newSize = size;
	int swap;

	if (array == NULL || size < 2)
		return;

	while (newSize)
	{
		swap = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				swap = 1;
			}
		}
		newSize--;
		if (swap == 0)
			break;
	}
}
