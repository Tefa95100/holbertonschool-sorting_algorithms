#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - Sort a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: The list to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;

			print_list(*list);
		}
		current = next;
	}
}
