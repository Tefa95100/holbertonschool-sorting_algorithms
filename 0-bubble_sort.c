#include "sort.h"

/**
 * bubble_sort - Use the bubble sort algorithm for sort an array
 *@array: Pointer on the array
 *@size: The size of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t index = 0;

	if (array != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
				index = -1;
			}
		}
	}
}
