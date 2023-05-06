#include "sort.h"

/**
 * Author: Aaron Will Djaba
 * swap - swap two numbers
 * @a: first number
 * @b: second number
 **/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * Author: Aaron Will Djaba
 * partition - split array around pivot
 * @arr: array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: i
 */
int partition(int *arr, int first, int last, size_t size)
{
	int pivot = arr[last];
	int i = first;
	int j;

	for (j = first; j < last; j++)
	{
		if (arr[j] <= pivot)
		{
			swap(&arr[i], &arr[j]);
			if (i != j)
				print_array(arr, size);
			i++;
		}
	}
	swap(&arr[i], &arr[last]);
	if (i != j)
		print_array(arr, size);
	return (i);
}

/**
 * Author: Aaron Will Djaba
 * quickSort - sort a part of the list
* @arr: array
 * @first: first element
 * @last: last element
 * @size: size
 * Return: nothing
 */
void quickSort(int *arr, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(arr, first, last, size);
		quickSort(arr, first, pivot - 1, size);
		quickSort(arr, pivot + 1, last, size);
	}
}

/**
 * Author: Aaron Will Djaba
 * quick_sort - quick sort method array
 * @array: array
 * @size: size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
