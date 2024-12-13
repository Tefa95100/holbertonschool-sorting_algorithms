#include "sort.h"
#include <stdio.h>

/**
 * partition - Sort an array of integers in ascending order using the Quick
 * sort algorithm
 * @array: The array to be sorted
 * @low: The lowest index of the array
 * @high: The highest index of the array
 * @size: The size of the array
 * Return: The index of the pivot
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j = 0;
	int temp = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_recursive - Sort an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: The array to be sorted
 * @low: The lowest index of the array
 * @high: The highest index of the array
 * @size: The size of the array
 * Return: void
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}



/**
 * quick_sort - Sort an array of integers in ascending order using the Quick
 * sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
