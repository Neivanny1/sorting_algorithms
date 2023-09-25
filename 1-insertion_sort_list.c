#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order with Insertion sort
 * @list: returned list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp;

	current = *list;
	current = current->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			tmp = current;

			if (current->next != NULL)
				current->next->prev = tmp->prev;
			current->prev->next = tmp->next;

			current = current->prev;
			tmp->prev = current->prev;
			tmp->next = current;
			if (current->prev != NULL)
				current->prev->next = tmp;
			current->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
			current = current->prev;
		}
		current = current->next;
	}
}
