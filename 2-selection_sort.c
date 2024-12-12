#include "sort.h"

/**
 * selection_sort - Use the selection sort algorithm for sort an array
 *@array: Pointer on the array
 *@size: The size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t idx_i = 0;
	size_t idx_j = 0;
	size_t search_small = 0;
	size_t temp = 0;

	if (array != NULL)
	{
		/*Browse the array*/
		while (idx_i != size)
		{
			/*Initialize at the same point of i*/
			idx_j = idx_i;
			search_small = idx_i;

			/*Browse with index j for compare and search the small number*/
			while (idx_j < size)
			{
				if (array[search_small] > array[idx_j])
					search_small = idx_j;
				idx_j++;
			}

			/*If a small number is find, then we reverse i and small*/
			if (idx_i != search_small)
			{
				temp = array[idx_i];
				array[idx_i] = array[search_small];
				array[search_small] = temp;
				print_array(array, size);
			}
			idx_i++;
		}
	}
}
