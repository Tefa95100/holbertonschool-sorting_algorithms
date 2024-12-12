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
		/**
		 * Browse the array and search if the next number is small
		 *if small reverse the two number and restart the loop
		 */
		while (index < size)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
				index = -1;
			}
			index++;
		}
	}
}
